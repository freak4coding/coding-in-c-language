#include<stdio.h>
void add(int,int);
void main(){
	int a,b;
	printf("ENTER TWO NUMBER\n");
	scanf("%d%d",&a,&b);
	add(a,b); 
}
void add(int x,int y){
	int z;
	z=x+y;
	printf("sum of two number is %d\n",z);
}
