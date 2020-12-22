#include<stdio.h>
void missingElement(int a[],int n){
	int k=1;
	for(int i=0;i<n;i++){
		if(k != a[i]){
			int d=a[i]-k;
			for(int j=k;j<a[i];j++)
				printf("%d,",j);
			k=a[i]+1;
		}else
			k++;
	}
}
int main(){
	int a[]={1,3,5,6,8,10,12,15};
	printf("Missing Elements = ");
	missingElement(a,8);
	return 0;
}
