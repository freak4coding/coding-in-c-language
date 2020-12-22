#include<stdio.h>

void main()
{
	int x;
	scanf("%d",&x);
	
	while(x%2!=0){
		printf("not even");
		return;
	}
	printf("Even");
}
