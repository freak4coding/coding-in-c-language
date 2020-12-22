#include<stdio.h>
//#include<stdlib.h>
int Min(int a[],int n,int k){
	int loc,j,min;
	loc=k;
	min=a[k];
	for(j=k+1;j<n;j++){
		if(min>a[j]){
			min=a[j];
			loc=j;
		}
	}
	return loc;
}

void main(){
	int n,i,loc,temp;
	int a[n];
	printf("enter size total no of element : ");
	scanf("%d",&n);
	printf("enter %d elements : ",n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++){
		loc=Min(a,n,i);
		temp=a[i];
		a[i]=a[loc];
		a[loc]=temp;
	}
	printf("sorted element : ");
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
}
