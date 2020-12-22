#include<stdio.h>
#include<stdlib.h>
void main(){
	char a[10];
	FILE *p2;
	p2=fopen("amit.txt","r");
	fscanf(p2,"%s",a);
	printf("%s",a);
	fclose(p2);
}
