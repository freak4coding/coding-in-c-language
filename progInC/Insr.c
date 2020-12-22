#include<stdio.h>
#include<stdlib.h>
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
	
	FILE *fp;
	int i,n=0;
	int a[10];
	
	fp=fopen("Data.txt","r");
	if(fp==NULL){
		printf("file does not exist  .... !!!");
		exit(0);
	}
	while(!feof(fp)){
		fscanf(fp,"%d",a[n]);
		n++;
	}
	insertionSort(a,n);
	printf("sorted element : ");
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	fclose(fp);
}
