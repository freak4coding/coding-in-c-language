#include<stdio.h>
int main(){
	int n;
	printf("Enter no of row|col : ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=2*n-1;j++){
			if(j>=n-i+1 && j<=n+i-1)
				printf("%d",i);
			else
				printf(" ");
		}
		printf("\n");
	}
	return 0;
}

/*#include<stdio.h>
int main(){
	int n;
	printf("Enter no of row|col : ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		for(int j=n;j>=i;j--){
				printf("*");
		}
		printf("\n");
	}
	return 0;
}*/
