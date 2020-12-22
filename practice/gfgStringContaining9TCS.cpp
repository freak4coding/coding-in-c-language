#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int check9(int num){
    int d;
    while(num!=0){
        d=num%10;
        if(d==9){
            return 1;
            //break;
        }
        num=num/10;
    }
    return 0;
}
int checkString(char *str){
    int num = atoi(str);
    return check9(num);
}
int main()
{
	//code
	int testcase;
	long long int num;
	char str[1000];
	char *token;
	char d[2]=" ";
	scanf("%d",&testcase);
	while(testcase--){
	    scanf("%s",str);
	    token=strtok(str, d);
	    while(token != NULL){
	        //if(checkString(token)==1)
	        printf("%s\n",token);
	        token=strtok(NULL, d);
	    }
	}
	return 0;
}
