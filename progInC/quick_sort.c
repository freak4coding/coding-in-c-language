#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
int partition (int arr[], int low, int high)
{
	int pivot = arr[high];
    int i = (low - 1),j;
 
    for (j = low; j <= high- 1; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
int main()
{
	clock_t start,end;
	double cpu_time_used;
	start=clock();
	FILE*fp;
	int n,i=0,c=0,arr[100000];
	fp=fopen("array.txt","r");
	while(!feof(fp))
	{
		fscanf(fp,"%d",&n);
		arr[c]=n;
		c++;
	}
	fclose(fp);
	c--;
	printf("After reading:\n");
	for(i=0;i<c;i++)
	{
		printf("%d\n",arr[i]);
	}
	quickSort(arr, 0, c - 1);
	printf("After sorting:\n");
	for(i=0;i<c;i++)
	{
		printf("%d\n",arr[i]);
	}
	end=clock();
	cpu_time_used=((double)(end-start))/CLOCKS_PER_SEC;
	printf("CPU execution time=%f\n",cpu_time_used);
	return 0;
}
