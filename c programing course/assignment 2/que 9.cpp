#include<stdio.h>
int main (){
	int a,b,c;
    printf("enter sides of triangle\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a+b>c && b+c>a && a+c>b)
    	printf("triangle is possible\n");
    else
    	printf("triangle is not possible\n");
}
