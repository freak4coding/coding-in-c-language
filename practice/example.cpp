#include<stdio.h>
int binary(int a){
    int bin=0,r;
    while(a!=0){
        r=a%2;
        bin=bin*10+r;
        a=a/2;
    }
    return bin;
}
int main(){
	printf("%d",binary(11));
return 0;
}
