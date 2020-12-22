#include<stdio.h>
void fib(int,int);
void main(){
	int a=0,b=1;
	printf("FIBNOCII SERIES=\n");
	printf("\n%d\n%d",a,b);
	fib(a,b);
	getch();
}
void fib(int x,int y){
	int sum;
	sum=x+y;
	if(sum<24){
		printf("\n%d",sum);
		fib(y,sum); /* recursive calling */
	}
}
