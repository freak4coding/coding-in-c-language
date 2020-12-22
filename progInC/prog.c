#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main(){
	FILE *fp,*fp1,*fp2;
	int a;
	fp=fopen("file.txt","r");
	fp1=fopen("even.txt","w");
	fp2=fopen("odd.txt","w");
	while(!feof(fp)){
		fscanf(fp,"%d",&a);
		if(a%2!=0)
			fprintf(fp1,"%d\n",a);
		else
			fprintf(fp2,"%d\n",a);
	}printf("Operation Completed");
	fclose(fp);
	fclose(fp1);
	fclose(fp2);
}