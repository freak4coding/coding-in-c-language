#include<stdio.h>
int main(){
	char x;
	printf("give input to check\n");
	scanf("%c",&x);
	if(x>='a' && x<='z'){
		printf("small case character\n");
	}else if(x>='A' && x<='Z'){
		printf("capital case character\n");
	}else if(x>='0' && x<='9'){
		printf("number\n");
	}else{
		printf("special character\n");
	}
}
