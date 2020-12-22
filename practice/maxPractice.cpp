#include<stdio.h>
int main(){
	int arr[]={0,1,0,1,2,0,0,0,1,4};
	int k = 4;
	int max=arr[0];
	for(int j=1; j<10; j++){
        if(max < arr[j])
			max=arr[j];
			printf("%d\n",max);
	}
return 0;
}
