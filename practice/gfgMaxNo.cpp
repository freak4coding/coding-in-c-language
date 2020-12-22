#include<stdio.h>
#include<stdlib.h>
int main()
{
	//code
	int t,n,i,j,*arr,max=0;
	scanf("%d",&t);
	while(t--){
	    printf("Enter Size of array : ");
		scanf("%d",&n);
	    arr=(int*)malloc(n*sizeof(int));
	    printf("array element : ");
	    for(i=0;i<n;i++)
	        scanf("%d",&arr[i]);
	    max=arr[0];
	    for(j=0;j<n;j++){
	        if(arr[j]>max)
	            max=arr[j];
	    }
	    printf("%d\n",max);
	    free(arr);
	}
	return 0;
}
