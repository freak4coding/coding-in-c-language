#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void sort(int a[],int n)
{
	int i,j,temp;
	for(i=0;i<n-1;i++)
		{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
			}	
		}
	}	
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
	
}
/*int  BinarySearch_nr(int a[],int l,int u,int key)
{	
	int mid;
	while(l<u)
	{
		mid=l+(u-1)/2;
		if(key==a[mid])
		return 0;
	
		if(key<a[mid])
		u=mid-1;
		else
		l=mid+1;
	}
	return -1;
	
}
*/	
int  BinarySearch_r(int a[],int l,int u,int key)
{
	int mid;
	if(l>u)
	return -1;
	else
	mid=l+(u-1)/2;
	
	if(key==a[mid])
	return 0;
	
	if(key<a[mid])
	return BinarySearch_r(a,l,mid-1,key);
	else
	return BinarySearch_r(a,mid+1,u,key);
}

void store(int a[],FILE *p,int n)
{
	int i;
	for(i=0;i<n;i++)
	fscanf(p,"%d\n",&a[i]);
}
	
void main()
{
	float t;
	clock_t en,st;
	 int a[100],i,key,n,k,c;
	 FILE *p;
	 p=fopen("numbers.txt","w");
	 
	 printf("Enter number elements ::");
	 scanf("%d",&n);
	 
	 for(i=0;i<n;i++)
	 {
	 scanf("%d",&k);
	 fprintf(p,"%d\n",k);
	 }
	 fclose(p);
	 p=fopen("numbers.txt","r");
	  
	 store(a,p,n);
	 sort(a,n);
	 printf("Enter a key element to search::");
	 scanf("%d",&key);
	 
	 st=clock();
	 c=BinarySearch_r(a,0,n-1,key);
	 en=clock();
	 t=(float)(en-st)/CLOCKS_PER_SEC;
	  
	 /* printf("NON RECURsION TIME::%f\n",t);
	  st=clock();
	 c=BinarySearch_nr(a,0,n-1,key);
	 en=clock();
	 t=(float)(en-st)/CLOCKS_PER_SEC;
	 */
	 printf("RECURsION TIME::%f\n",t);
	 if(c==0)
	 
	 printf("Element found\n");
	 else
	 printf("element not found");
	 
}
