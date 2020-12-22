#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void calculate_the_maximum(int n, int k) {
  //Write your code here.
    int *an,*o,*xo;
    int size=2*n;
    int andMax=0, orMax=0, xorMax=0;
    
    an=(int*)malloc(size*sizeof(int));
	o=(int*)malloc(size*sizeof(int));
	xo=(int*)malloc(size*sizeof(int));
	for(int i=0;i<size;i++){
		an[i]=o[i]=xo[i]=0;
	}
	int i=0;
    for(int a=1;a<n;a++){
        for(int b=a+1;b<=n;b++){
            an[i]=a & b;
            o[i]=a | b;
            xo[i]=a ^ b;
            printf("%d %d %d\n",an[i],o[i],xo[i]);
            i++;
        }
    }
    andMax=an[0];
    orMax=o[0];
    xorMax=xo[0];
	/*for(int j=0;j<size;j++){
    	printf("an[%d] = %d\n",j,an[j]);
    }*/
    for(int j=0;j<size;j++){
    	printf("andMax = %d ",andMax);
    	printf("orMax = %d ",orMax);
    	printf("xorMax = %d\n",xorMax);
        if(andMax<an[j] && andMax<k)
            andMax=an[j];
        if(orMax<o[j] && orMax>k)
            orMax=o[j];
        if(xorMax<xo[j] && xorMax>k)
            xorMax=xo[j];
    }
    printf("k=%d",k);
    //printf("orMax = %d\n",orMax);
    //printf("andMax = %d\n",andMax);
    //printf("xorMax = %d\n",xorMax);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}

