#include<stdio.h>
#include<stdlib.h>
void swap(int *a,int *b){
	int t;
	t=*a;
	*a=*b;
	*b=t;
}
int partition(int a[],int p,int r){
	int pivot,i,j;
	i=p-1;
	pivot=a[r];
	for(j=p;j<=r-1;j++){
		if(a[j]<=pivot){
			i=i+1;
			swap(&a[i],&a[j]);
		}
	}
	swap(&a[i+1],&a[r]);
	return i+1;
}

void quickSort(int a[],int p,int r){
	int q;
	if(p<r){
		q=partition(a,p,r);
		quickSort(a,p,q-1);
		quickSort(a,q+1,r);
	}
}

void main(){
	int *a,i,n;
	printf("enter the size if array : ");
	scanf("%d",&n);
	a=(int*)malloc(n*sizeof(int));
	printf("enter %d elements : ",n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	quickSort(a,0,n-1);
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
}
