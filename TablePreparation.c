#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAXMACROBODY 10

typedef struct MDT
{
    char card[81];
}MDT;

typedef struct MNT
{
    char name[9];
    int mdtIndex;
}MNT;

typedef struct ALA
{
    char arg[9];
    char formalarg[9];
}ALA;

int main()
{
    MNT mnt;
    MDT *mdt=(MDT *)malloc(sizeof(MDT)*MAXMACROBODY);
    ALA *ala=NULL;
    int mdtp;  /* point to starting index of macro definition */
    int alap;  /* used to point ala while reading macro call */
    int alaTop;  /* keep track of ala index */
    int mdtTop=0;  /* keep track of mdt index */
    int macroFlag=0; /* 0- if MACRO found    1- if MEND found */
    int i,j;   /* used as iterator */
    int isNextLineMacroName=0; /* it is one when next line is Macro Name i.e while reading MACRO it's value is 1 */
    int isLabelArgument=0; /* it should be 1 if label argument found */
    int countArguments=0;  /* it calculate no of arguments except LabelArgument. if isLabelArgument=1, then totArgument = countArgument+1 */
    char *temp;  /* Used in strtok() */
    char printcard[81];
    FILE *fp = fopen("Macro.txt","r");
    FILE *fout = fopen("object.txt","w");
    char macroRead[81];      /* used to read one line from the file */
    if(!fp){
        printf("file not found\n");
        exit(0);
    }
    if(!fout){
        printf("Error opening object file\n");
        exit(0);
    }
    while(!feof(fp))
    {
        fscanf(fp,"%[^\n]s",macroRead);   /* read one line from file */
        fgetc(fp);                        /* remove the \n from the line */
        if(strstr(macroRead,"MACRO") != NULL){  /* MACRO found  make macroFlag = 1 */
            macroFlag = 1;
            isNextLineMacroName = 1;
        }
        else if(isNextLineMacroName == 1 && macroFlag == 1){    /* Macro name found */
            /* Store macro name with argument in mdt */
            strcpy(mdt[mdtTop].card,macroRead);
            mnt.mdtIndex = mdtTop;
            mdtTop++;  /* update mdtTop */

            /* count no of arguments */
            for(i=0;i<81;i++){
                if(i==0 && macroRead[i] == '&')       /* Label argument found */
                    isLabelArgument = 1;
                else if(macroRead[i] == '&')          /* count non label arguments */
                    countArguments++;
            }
            /* no of argument calculated */
            ala = (ALA *)malloc(sizeof(ALA)*(countArguments+isLabelArgument));    /* create ALA table */
            alaTop = 1; /* initially top value is 1, Index-0 is for label argument */
            /* Storing arguments and macro name into MNT and ALA table */
            temp = strtok(macroRead," ,");
            while(temp != NULL)
            {
                /* Storing arguments */
                if(temp[0] == '&' && macroRead[1] == temp[1])  /* it is label macro argument store in ALA table*/
                    strcpy(ala[0].arg,temp);
                else if(temp[0] == '&' )   /* it is non-label argument */
                {
                    strcpy(ala[alaTop].arg,temp);
                    alaTop++;
                }
                /* Storing arguments complete */
                /* Storing Macro Name */
                else if(temp[0]!='&'){
                    strcpy(mnt.name,temp);
                }
                /* Storing macro Name complete */
                temp = strtok(NULL," ,");
            }
            /* Storing arguments and macro name into MNT and ALA table complete */
            isNextLineMacroName = 0;  /* after reading macro name make it 0 */
        }
        /* Macro Body */
        else if(macroFlag == 1){
            /* End of macro come */
            if(strstr(macroRead,"MEND") && !feof(fp)){
                strcpy(mdt[mdtTop].card,"MEND");
                macroFlag = 0;
            }
            else
            {
                 strcpy(mdt[mdtTop].card,macroRead);
            }

            mdtTop++;
        }
  /*-------------------------------------------------------------------PASS1 COMPLETE----------------------------------------------------------------------------------------*/
       else if(macroFlag == 0){     /* not macro definition */
            if(strstr(macroRead,mnt.name)!=NULL &&(mdtp=mnt.mdtIndex)>-1)  /* macro call found */
            {
                alap = 0;
                /* replace formal arguments with actual arguments */
                temp = strtok(macroRead," ");
                while(temp != NULL)
                {
                    if(temp[0]==macroRead[0])   /* label argument found */
                    {
                        for(i=0;i<9;i++){
                            if(i<strlen(temp))
                                ala[alap].formalarg[i] = temp[i];
                            else if(i==8)
                                ala[alap].formalarg[i] = '\0';
                            else
                                ala[alap].formalarg[i] = ' ';
                        }
                         alap++;   /* update ala pointer to next ala */
                    }
                    else if(strstr(mnt.name,temp)!=NULL);    /* macro name found      do nothing */
                    else{
                        for(i=0;i<9;i++){
                            if(i<strlen(temp))
                                ala[alap].formalarg[i] = temp[i];
                            else{
                                ala[alap].formalarg[i] = '\0';
                                break;
                            }
                        }
                         alap++;   /* update ala pointer to next ala */
                    }
                    temp = strtok(NULL," ,");
                }
                /* replace formal arguments with actual arguments complete */
                /* replace macro call with macro definition */
                for(i=mnt.mdtIndex+1;i<mdtTop-1;i++)   /* read one card at a time */
                {
                    int count=0; /* 0 for label argument 1 for opcode 2,3 for operand
                    //for(i=0;i<81;i++){ printcard[i]='\0'; }   /* initialization */
                    strcpy(printcard,mdt[i].card);
                    temp = strtok(printcard," ");
                    while(temp != NULL){
                        if(strcmp(ala[0].arg,temp)==0 && count==0){  /* label argument found */
                            for(j=0;j<9;j++){
                                if(j<strlen(ala[0].formalarg))
                                    fputc(ala[0].formalarg[j],fout);
                                else fputc(' ',fout);
                            }
                        }
                        else if(strcmp(ala[0].arg,temp)!=0 && count==0){ /* label argument not present so store space then store opcode*/
                            for(j=0;j<9;j++)   // store space
                                fputc(' ',fout);
                            for(j=0;j<9;j++){   // store opcode
                                if(j<strlen(temp))
                                    fputc(temp[j],fout);
                                else fputc(' ',fout);
                            }
                            count++;
                        }
                        else if(count==1){  /* opcode found */
                            for(j=0;j<9;j++){
                                if(j<strlen(temp))
                                    fputc(temp[j],fout);
                                else fputc(' ',fout);
                            }
                        }
                        else{     /* operands found */
                            int flag = 0;
                            for(j=1;j<(countArguments+isLabelArgument);j++){
                                if(strcmp(temp,ala[j].arg)==0){
                                    fputs(ala[j].formalarg,fout);
                                    flag = 1;  /* operand found */
                                    break;
                                }
                            }
                            if(flag==0){   /* argument not found in ala, it is a operand so write into file */
                                fputs(temp,fout);
                            }
                            if(count==2)
                                fputc(',',fout);
                        }
                        //else if()
                        temp = strtok(NULL," ,");
                        count++;
                    }
                    fputs("\n",fout);
                }
            }
            else{   /* machine instruction found */
                if(!feof(fp)){
                   fputs(macroRead,fout);
                   fputs("\n",fout);
                }
            }
       }
    }
    fclose(fout);
    fclose(fp);
    return 0;
}
