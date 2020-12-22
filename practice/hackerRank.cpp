#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;
void sort_by_area(triangle* tr, int n) {
	/**
	* Sort an array a of the length n
	*/
    int *area=(int*)malloc(n*sizeof(int));
    int p=0;
    for(int i=0;i<n;i++){
        p=(tr[i].a+tr[i].b+tr[i].c)/2;
        area[i]=sqrt(p*(p-tr[i].a)*(p-tr[i].b)*(p-tr[i].c));
    }
    
	for (int i = 0; i < n; i++) {
		printf("%d\n", area[i]);
	}
	
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(area[j]>area[j+1]){
                triangle temp=tr[j];
                tr[j]=tr[j+1];
                tr[j+1]=temp;                
            }
        }
    }
    printf("\n");
    for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
}

int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = (triangle*)malloc(n*sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	//for (int i = 0; i < n; i++) {
	//	printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	//}
	return 0;
}
