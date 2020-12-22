#include<stdio.h>
#include<stdlib.h>
void main(){
	char a[10];
	FILE *p1,*p2;
	p1=fopen("source.txt","w");
	printf("enter string :");
		scanf("%s",a);
		fprintf(p1,"%s",a);
	fclose(p1);
	p1=fopen("source.txt","r");
	p2=fopen("dest.txt","w");
		fscanf(p1,"%s",a);
		fprintf(p2,"%s",a);
	fclose(p1);
	fclose(p2);
}
