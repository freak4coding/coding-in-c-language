#include<stdio.h>
int main(){
	int i,j,n,k;
	printf("Enter total no of row : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		int flag=1;
		for(j=1;j<=(2*n)-1;j++){
			if(j>=n+1-i && j<=n-1+i && flag){
				printf("*");
				flag=0;
			}else{
				printf(" ");
				flag=1;
			}
		}
		printf("\n");
	}
}
