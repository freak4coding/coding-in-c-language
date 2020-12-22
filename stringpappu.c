#include<stdio.h>
void main(){
	int r,n,flag=1;
	printf("enter a number : ");
	scanf("%d",&n);
	while(n!=0){
		r=n%10;
		n=n/10;
		if(r!=1 && r!=0){
			flag=0;
			break;
		}
	}
	if(flag==1)
		printf("binary no");
	else
		printf("not a binary no");
}
