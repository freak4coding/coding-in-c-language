#include<stdio.h>
#include<stdlib.h>
int main()
{
	char sent[30];
	FILE *fptr1,*fptr2;
	fptr1=fopen("pro.txt","w");
	fptr2=fopen("pro1.txt","w");
	if(fptr1==NULL)
	{
		printf("error\n");
			exit(1);
	}
	
	printf("enter the sentence\n");
		gets(sent);
	fprintf(fptr1,"%s",sent);
	
	fclose(fptr1);
	
	fptr1=fopen("pro.txt","r");
		
	while(!feof(fptr1))
	{
		char c=fgetc(fptr1);
		
		fputc(c,fptr2);
	}
	
	fclose(fptr1);
	fclose(fptr2);
	return 0;
}
