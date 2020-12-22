#include<stdio.h>
#include<conio.h>
void main(){
	int i;
	char a[10];
	char b[10];
	printf("ENTER CHAR OF A\n");
	scanf("%s",&a);
	printf("ENTER CHAR OF B\n");
	scanf("%s",&b);
	printf("a: %s\n",a);
	printf("b: %s\n",b);
	printf("len(a): %d\nlen(b): %d\n",strlen(a),strlen(b));
	printf("cmp(): %d",strcmp(a,b));
	getch();
}
