#include<stdio.h>
int main(){
	int i,j,n,k;
	printf("Enter total no of row : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=(2*n)-1;j++){
			if(j>n+1-i && j<n-1+i)
				printf(" ");
			else
				printf("*");
		}
		printf("\n");
	}
}
