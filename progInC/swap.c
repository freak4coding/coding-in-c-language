#include<stdio.h>
void main(){
	int a[2]={1,3};
	int i=0,j=1;
	a[i]=a[i]*a[j];
	a[j]=a[i]/a[j];
	a[i]=a[i]/a[j];
	printf("%d %d",a[0],a[1]);
}
