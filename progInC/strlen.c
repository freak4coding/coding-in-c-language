#include<stdio.h>
int length(char *p){
	int i;
	for(i=0;*(p+i)!='\0';i++);
	return i;
}

void reverse(char *p){
	int i,l;
	char t;
	l=length(p)-1;
	for(i=0;i<l;i++,l--){
		char temp = *(p+i);
		*(p+i) = *(p+l);
		*(p+l) = temp;
	}
	
}

int main(){
	int l;
	char a[10],*rs;
	printf("enter string : ");
	scanf("%[^\n]",a);
	//printf("string : %s\n",a);
	l=length(a);
	printf("length of string : %d\n",l);
	reverse(a);
	printf("%s",a);
	return 0;
}
