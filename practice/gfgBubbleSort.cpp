#include<stdio.h>
#include<stdlib.h>
void swap(int *a,int *b){
    int temp = *a;
    *b = *a;
    *a = temp;
}
void numofsubset(int arr[],int n){
    int i,k,j;
    for(i=1;i<n;i++){
        for(j=1;j<n-i;j++){
            if(arr[j]>arr[j+1])
                swap(&arr[j],&arr[j+1]);         
        }
    }
    for(i=0;i<n;i++)
		printf("%d ",arr[i]);
}
int main(){
		//code
	int T,N,*arr;
	printf("Enter array size : ");
	scanf("%d",&N);
	arr=(int*)malloc(N*sizeof(int));
	printf("Enter array : ");
	for(int i=0;i<N;i++)
	    scanf("%d",&arr[i]);
	numofsubset(arr,N);
return 0;
}
