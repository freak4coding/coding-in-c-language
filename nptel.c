#include<stdio.h>
void main(){
	int x=5,y;
	x=y;
	y=(x*10)+(y%2);
	printf("value=%d",y);
}
