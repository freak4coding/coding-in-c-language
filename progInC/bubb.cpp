#include<stdio.h>
#include<stdlib.h>
void swap(int *a,int *b)
{
	int t;
	t=*a;
	*a=*b;
	*b=t;
}
void bubble_sort(int a[],int n)
{
	int i,j,temp;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i;j++)
		{
			if(a[j]>a[j+1])
			{
				swap(&a[j],&a[j+1]);
			}
		}
	}
}

int main()
{
	int *a,i,n;
	printf("enter the size::");
	scanf("%d",&n);
	a=(int*)malloc(n*sizeof(int));
	printf("enter %d elements : ",n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	bubble_sort(a,n);
	for(i=0;i<n;i++)
		printf("%d  ",a[i]);
}
