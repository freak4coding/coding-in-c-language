#include<stdio.h>
void main(){
	int a,p,sum=0;
	printf("ENTER FIVE DIGIT NUMBER\n");
	scanf("%d",&a);
	while(a!=0){
	p=a%10;
	sum=sum*10+p;
	a=a/10;
    }
    printf("reverse=%d",sum);
}
