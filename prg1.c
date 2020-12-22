#include<stdio.h>
void main(){
	int a[3][3],b[3][3],r[3][3];
	int i,j,k;
	printf("enter 1st matrix \n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++)
			scanf("%d",&a[i][j]);
	}
	printf("enter 2nd matrix \n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++)
			scanf("%d",&b[i][j]);
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++)
			r[i][j]=0;
	}
	printf("Resultant matrix :\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++)
			printf("%d ",r[i][j]);
		printf("\n");
	}
}
