#include<stdio.h>
#include<stdlib.h>
void primeNo(int x,int y){
	int i,j,flag;
	for(i=x;i<=y;i++){
		flag=1;
		for(j=2;j<=i/2;j++){
			if(i%j==0)
				flag=0;
		}
		if(flag==1)
			printf("%d ",i);
	}
}
int main(){
	int x,y;
	printf("Enter range :");
	scanf("%d%d",&x,&y);
	printf("Prime no in range %d to %d : ",x,y);
	primeNo(x,y);
return 0;
}
