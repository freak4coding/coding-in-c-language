#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int searchString(char str[],char s){
	int count=0;
	char *tok;
	tok=strtok(str," ");
	while(tok!=NULL){
		if(!strcmp(tok,s))
			count++;
		tok=strtok(NULL," ");
	}
	return count;
}
void main(){
	int i,j;
	char *str,s;
	FILE *fp;
	
	fp=fopen("data.txt","r+");
	if(fp==NULL){
		printf("enter data : ");
		gets(str);
		fprintf(fp,"%[^\n]",str);
		printf("enter string to search : ");
		scanf("%s",&s);
		printf("total : %d",search(str,s));
	}
}
