#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main(){
	char *tok;
	char str[80],word[20],chr;
	int count=0,line=1;
	FILE *fp;
	fp=fopen("data.txt","r");
	if(fp==NULL){
		printf("file doesn't exist !!\ncreate file !!\n");
		fp=fopen("data.txt","w");
		printf("enter data and end content with & !!");
		scanf("%c",&chr);
		while(chr!='&'){
			fprintf(fp,"%c",chr);
			scanf("%c",&chr);
		}
	}
	fclose(fp);
	
	fp=fopen("data.txt","r");
	printf("Enter the string to be searched !!\n");
	scanf("%s",word);
	while(!feof(fp)){
		fgets(str,80,fp);
		tok=strtok(str," .");
		while(tok!=NULL){
			if(!strcmp(word,tok))
				count++;
			tok=strtok(NULL," .");
		}
		printf("word ' %s ' repeated %d times in line no %d !\n",word,count,line);
		count=0; 
		line++;
	}
	fclose(fp);
}
