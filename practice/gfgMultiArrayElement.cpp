#include<stdio.h>
#include<stdlib.h>
int main()
{
	//code
	int t,n,i,j,*arr,mul=0;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
	    arr=(int*)malloc(n*sizeof(int));
	    for(i=0;i<n;i++)
	        scanf("%d",&arr[i]);
	    mul=arr[0];
	    for(j=1;j<n;j++)
	        mul=mul*arr[j];
	    printf("%d\n",mul);
	    free(arr);
	}
	return 0;
}
