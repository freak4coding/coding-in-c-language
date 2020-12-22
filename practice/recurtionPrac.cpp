#include<stdio.h>
#include<stdlib.h>
int feb(int n){
	if(n==1)
		return 1;
	else if(n==2)
		return 1;
	else
		return feb(n-1)+feb(n);
}
int main(){
	int n;
	printf("Enter a number : ");
	scanf("%d",&n);
	printf("feb = %d",feb(n));
}
