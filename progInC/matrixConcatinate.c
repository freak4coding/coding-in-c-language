#include<stdio.h>
#include<stdlib.h>
void main(){
	int **mat1,**mat2,**mat;
	int r1,r2,c1,c2,i,j,option,count,count2,row,column;
	
	printf("enter no of rows and cols of 1st matrix : ");
	scanf("%d%d",&r1,&c1);
	printf("enter no of rows and cols of 2nd matrix : ");
	scanf("%d%d",&r2,&c2);
	
	mat1=(int**)malloc(r1*sizeof(int*));
	for(i=0;i<r1;i++)
		mat1[i]=(int*)malloc(c1*sizeof(int*));
	
	mat2=(int**)malloc(r2*sizeof(int*));
	for(i=0;i<r2;i++)
		mat2[i]=(int*)malloc(c2*sizeof(int*));
	
	printf("Enter elements of 1st matrix:\n");
	for(i=0;i<r1;i++){
		for(j=0;j<c1;j++){
			scanf("%d",&mat1[i][j]);
		}
	}
	printf("Enter elements of 2nd matrix:\n");
	for(i=0;i<r2;i++){
		for(j=0;j<c2;j++){
			scanf("%d",&mat2[i][j]);
		}
	}
	while(1){
		printf("1: horizontal concatination\n2: vertical concatination\n3: diagonal concatination\n4: exit\n");
		printf("select an option : ");
		scanf("%d",&option);
		switch(option){
			case 1: 
					if(r1>r2)
						row=r1;
					else
						row=r2;
					column=c1+c2;
					mat=(int**)malloc(row*sizeof(int*));
					for(i=0;i<row;i++)
						mat[i]=(int*)malloc(column*sizeof(int*));
					for(i=0;i<row;i++){
						for(j=0;j<column;j++){
							mat[i][j]=0;
						}
					}
					for(i=0;i<r1;i++){
						for(j=0;j<c1;j++){
							mat[i][j]=mat1[i][j];
						}
					}
					for(i=0;i<row;i++){
						count=0;
						for(j=c1;j<column;j++){
							mat[i][j]=mat2[i][count];
							count++;
						}
					}
					for(i=0;i<row;i++){
						for(j=0;j<column;j++){
							printf("%d ",mat[i][j]);
						}
						printf("\n");
					}
				break;
			
			case 2:
					if(c1>c2)
						column=c1;
					else
						column=c2;
					row=r1+r2;
					mat=(int**)malloc(row*sizeof(int*));
					for(i=0;i<row;i++)
						mat[i]=(int*)malloc(column*sizeof(int*));
					for(i=0;i<row;i++){
						for(j=0;j<column;j++){
							mat[i][j]=0;
						}
					}
					for(i=0;i<r1;i++){
						for(j=0;j<c1;j++){
							mat[i][j]=mat1[i][j];
						}
					}
					count=0;
					for(i=r1;i<row;i++){
						for(j=0;j<column;j++){
							mat[i][j]=mat2[count][j];
						}
						count++;
					}
					for(i=0;i<row;i++){
						for(j=0;j<column;j++){
							printf("%d ",mat[i][j]);
						}
						printf("\n");
					}
				break;
			
			case 3: 
					row=r1+r2;
					column=c1+c2;
					mat=(int**)malloc(row*sizeof(int*));
					for(i=0;i<row;i++)
						mat[i]=(int*)malloc(column*sizeof(int*));
					for(i=0;i<row;i++){
						for(j=0;j<column;j++){
							mat[i][j]=0;
						}
					}
					for(i=0;i<r1;i++){
						for(j=0;j<c1;j++){
							mat[i][j]=mat1[i][j];
						}
					}
					count2=0;
					for(i=r1;i<row;i++){
						count=0;
						for(j=c1;j<column;j++){
							mat[i][j]=mat2[count2][count];
							count++;
						}
						count2++;
					}
					for(i=0;i<row;i++){
						for(j=0;j<column;j++){
							printf("%d ",mat[i][j]);
						}
						printf("\n");
					}
				break;
			
			case 4: exit(0);
				break;
			
			default :
				printf("invalid selection");
				break;
		}
	}
}
