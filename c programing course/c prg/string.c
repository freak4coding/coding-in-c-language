#include<stdio.h>
void main(){
int i;
char name[10];
printf("ENTER YOUR NAME\n");
scanf("%s",&name);
for(i=0;i<10;i++){
	printf("%c",name[i]);
}
printf("\n hellow %s",name);
}
