#include<stdio.h>
void main(){
	int x=20;
	int *p=&x;
	*p=10;
	printf("value of x : %d",x);
}
