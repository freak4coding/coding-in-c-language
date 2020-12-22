#include<stdio.h>
#include<stdlib.h>
void main(){
	char a[10];
	int i;
	FILE *p1,*p2;
		p1=fopen("amit.txt","w");
		printf("ENTER SOME STRING CONTENT :");
		scanf("%s",a);
		fprintf(p1,"%s",a);
		fclose(p1);
		p2=fopen("amit.txt","r");
		fscanf(p2,"%s",a);
		printf("%s",a);
		fclose(p2);
}
