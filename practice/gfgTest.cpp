#include <stdio.h>
#include<string.h> 
int main() 
{ 
   	int testcase;
	char str[100];
	char *token;
	const char d[2]=" ";
	printf("enter testcase : ");
	scanf("%d",&testcase);
	printf("enter string : ");
	//scanf("%[^\n]%c",str);
	fgets(str, sizeof(str), stdin);	
	while(testcase--){
		
		token=strtok(str, d);
	    while(token != NULL){
	        //if(checkString(token)==1)
	            printf("%s\n",token);
	        token=strtok(NULL, d);
	    }
	}
   return 0; 
} 
