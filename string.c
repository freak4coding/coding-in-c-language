#include<stdio.h>
#include<stdlib.h>
void main(){
	char a[10];
	FILE *p;
	p=fopen("string.txt","w");
	printf("enter string :");
		scanf("%s",a);
		fprintf(p,"%s",a);
	fclose(p);
	p=fopen("string.txt","r");
		fscanf(p,"%s",a);
		printf("%s",a);
	fclose(p);
}
