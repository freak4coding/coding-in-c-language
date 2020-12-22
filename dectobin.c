#include<stdio.h>
void main(){
	int n,r,i,k=0,a[20];
	printf("enter a no : ");
	scanf("%d",&n);
	while(n!=0){
		r=n%2;
		n=n/2;
		a[k]=r;
		k+=1;
	}
	k=k-1;
	for(i=0;i<k;i++){
		a[i]=a[k-i];
	}
	k=k+1;
	for(i=0;i<k;i++){
		printf("%d",a[i]);
	}
}
