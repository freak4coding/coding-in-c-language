#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct string{
    char s[10000];
}S;

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    S T[10];
    int t,i,j,k;
    printf("Enter total no of string : ");
    scanf("%d",&t);
    for(i=0;i<t;i++){
    	printf("Test%d String: ",i);
        scanf("%s",&T[i].s);
	}
	/*for(i=0;i<t;i++){
		for(j=0;j<strlen(T[i].s);j++){
     	   printf("%c ",T[i].s[j]);
    	}
	}*/
    for(i=0;i<t;i++){
        for(j=0;j<strlen(T[i].s);j+=2){
            printf("%c",T[i].s[j]);
        }
        printf("  ");
        for(k=1;k<strlen(T[i].s);k+=2){
            printf("%c",T[i].s[k]);
        }
        printf("\n");
    }
    return 0;
}

