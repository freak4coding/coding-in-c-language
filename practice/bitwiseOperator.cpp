#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.
void calculate_the_maximum(int n, int k) {
  //Write your code here.
    int andMax=0, orMax=0,xorMax=0,a,o,x;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
        	a=i&j;
        	o=i|j;
        	x=i^j;
            if(andMax<a && a<k)
                andMax=a;
            if(orMax<o && o<k)
                orMax=o;
            if(xorMax<x && x<k)
                xorMax=x;
        }
    }
    printf("%d\n%d\n%d",andMax,orMax,xorMax);
}

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k); 
    return 0;
}

