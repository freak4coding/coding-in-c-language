#include<stdio.h>
void insertionSort(int a[],int n){
	int i,j,temp;
	for(i=1;i<n;i++){
		temp=a[i];
		for(j=i-1;j>=0 && temp<a[j];j--){
			a[j+1]=a[j];
		}
		a[j+1]=temp;
	}
}
void main(){
	int n,i;
	int a[n];
	printf("enter size total no of element : ");
	scanf("%d",&n);
	printf("enter %d elements : ",n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	insertionSort(a,n);
	printf("sorted element : ");
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
}
