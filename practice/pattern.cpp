#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() 
{
    int n;
    int row,col,j,i,k;
    printf("enter n : ");
	scanf("%d", &n);
  	// Complete the code to print the pattern.
    row=col=n+(n-1);
    for(i=0;i<row;i++){
        k=n;
        for(j=0;j<=i;j++){
            printf("%d ",k);
            k-=1;
        }
        printf("\n");
    }
    return 0;
}
