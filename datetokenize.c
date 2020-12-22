#include<stdio.h>
#include<string.h>
void main(){
	char a[50];
	char *tok;
	int i;
	printf("enter date followed by / \n");
	scanf("%s",a);
	
	tok=strtok(a,"/");
	printf("\nday  : %s\n",tok);
	tok=strtok(NULL,"/");
	i=atoi(tok);
		printf("month: ");
		switch(i){
			case 1: printf("jan\n");
				break;
			case 2: printf("feb\n");
				break;
			case 3: printf("mar\n");
				break;
			case 4: printf("apr\n");
				break;
			case 5: printf("may\n");
				break;
			case 6: printf("jun\n");
				break;
			case 7: printf("jul\n");
				break;
			case 8: printf("Aug\n");
				break;
			case 9: printf("sep\n");
				break;
			case 10: printf("oct\n");
				break;
			case 11: printf("nov\n");
				break;
			case 12: printf("dec\n");
				break;
		}
		tok=strtok(NULL,"/");
		printf("year : %s",tok);
}
