#include<stdio.h>
int main(){
	int x,r,s=0,k;
	printf("ENTER A FIVE DIGIT NUMBER\n");
	scanf("%d",&x);
	k=x;
	while(x!=0){
		r=x%10;
		s=(s*10)+r;
		x=x/10;
	}
	printf("original value=%d\n",k);
	printf("reversed value=%d\n",s);
	if(k==s)
	  printf("same\n");
	else
	  printf("not same\n");
}
