#include<stdio.h>
#include<string.h>
void main(){
	char a[50];
	char *tok;
	printf("enter string followed by - & , \n");
	scanf("%s",a);
	printf("\nstring in tokenized form\n");
	tok=strtok(a,"-,");
	while(tok!=NULL){
		printf("%s\n",tok);
		tok=strtok(NULL,"-,");
	}
}
