#include<stdio.h>
int add(int*,int*);
void main(){
	int a,b,sum;
	printf("ENTER TWO VALUES\n");
	scanf("%d%d",&a,&b);
	sum=add(&a,&b);
	printf("sum of two numbers=%d",sum);
}
int add(int *x,int*y){
	int z;
	
	z=*x+*y;
	return z;
}
