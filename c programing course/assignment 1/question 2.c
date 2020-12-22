#include<stdio.h>
void main(){
	int c,d;
	printf("ENTER TWO NUMBERS\n");
	scanf("%d%d",&c,&d);
	printf("c=%d  d=%d\n\nyh",c,d);
	c=c+d;
	d=c-d;
	c=c-d;
	printf("c=%d\nd=%d",c,d);
}
