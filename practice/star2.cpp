#include<stdio.h>
int main(){
	int i,j,n,k;
	printf("Enter total no of row : ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=n;j>i;j--){
			printf("*");
		}
		printf("\n");
	}
}
