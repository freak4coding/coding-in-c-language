#include<stdio.h>
void prim_fact(int);
void main(){
	int num;
	printf("ENTER ANY NUMBER\n");
	scanf("%d",&num);
	prim_fact(num);
}
void prim_fact(int x){
	static int i=2;
	if(i<=x){
		if(x%i==0){
			printf("\n%d",i);
			x=x/i;
		}
		else
			i++;
			prim_fact(x);
	}
}
