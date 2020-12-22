#include<stdio.h>
int main(){
	char x;
	int a,i=0;
	
	printf("ENTER A CHARACTER : ");
	scanf("%c",&x);
	if(x>='A' && x<='Z'){
	   printf("upper case character\n");
	   while(i!=x){
	   		i=i+1;
	   }
	   printf("position of % c is=%d",x,i);
	}else if(x>='a' && x<='z'){
	   printf("lower case character\n");
    }else{
    	printf("not an alphabet\n");
	}
	  
	
}
