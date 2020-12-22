#include<stdio.h>
#include<stdlib.h>
int main()
{
	//code
	int *arr,i,T,N,sum;
	scanf("%d",&T);
	while(T--){
	    sum=0;
	    scanf("%d",&N);
	    arr=(int*)malloc(N*sizeof(int));
	    for(i=0;i<N;i++)
	        scanf("%d",&arr[i]);
	    for(i=0;i<N;i++)
	        sum+=arr[i];
	    if(sum % 3 == 0)
	        printf("1\n");
	    else
	        printf("0\n");
	    free(arr);
	}
	return 0;
}
