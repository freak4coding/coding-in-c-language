#include<stdio.h>
int rec(int);
void main(){
	int i,fact;
	printf("ENTER A NUMBER\n");
	scanf("%d",&i);
	fact=rec(i);
	printf("FACTORIAL OF %d = %d",i,fact);
}
int rec(int x){
	int res;
	if(x==1 || x==0){
		return 1;
	}else{
		res=x*rec(x-1);
		return res;
	}
}
