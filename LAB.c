#include<stdio.h>

/* NOT GATE  */

void NOT(){
	int a;
	printf("enter an input : ");
	scanf("%d",&a);
	if(a==1 || a==0){
		if(a==1)
			printf("Output : 0\n");
		else
			printf("Output : 1\n");
	}else
		printf("Invalid input\n");
}

/*  AND GATE  */

void AND(){
	int a,b;
	printf("enter two inputs : ");
	scanf("%d%d",&a,&b);
	if((a==1 || a==0) && (b==0 || b==1)){
		if(a==0 || b==0)
			printf("Output : 0\n");
		else
			printf("Output : 1\n");	
	}else
		printf("Invalid input\n");
}

/*  OR GATE  */

void OR(){
	int a,b;
	printf("enter two inputs : ");
	scanf("%d%d",&a,&b);
	if((a==1 || a==0) && (b==0 || b==1)){
		if(a==1 || b==1)
			printf("Output : 1\n");
		else
			printf("Output : 0\n");
	
	}else
		printf("Invalid input\n");
}

/*  NAND GATE */

void NAND(){
	int a,b;
	printf("enter two inputs : ");
	scanf("%d%d",&a,&b);
	if((a==1 || a==0) && (b==0 || b==1)){
		if(a==0 || b==0)
			printf("Output : 1\n");
		else
			printf("Output : 0\n");
		}else
 		printf("Invalid input\n");
}

/*  NOR GATE  */

void NOR(){
	int a,b;
	printf("enter two inputs : ");
	scanf("%d%d",&a,&b);
	if((a==1 || a==0) && (b==0 || b==1)){
		if(a==1 || b==1)
			printf("Output : 0\n");
			printf("Output : 1\n");
	}else
		printf("Invalid input\n");
}

/*  EXOR GATE  */

void EXOR(){
	int a,b;
	printf("enter two inputs : ");
	scanf("%d%d",&a,&b);
	if((a==1 || a==0) && (b==0 || b==1)){
		if(a!=b)
			printf("Output : 1\n");
		else
			printf("Output : 0\n");
		}else
		printf("Invalid input\n");
}
void main(){
	int option;
	printf("1: NOT\n2: AND-2\n3: OR-2\n4: NAND-2\n5: NOR-2\n6: EX-OR-2\n7 :EXIT\n");
	while(1){
	  printf("Select an option : ");
	  scanf("%d",&option);
		switch(option){
			case 1:NOT();
			       break;
			case 2:AND();
			       break;
			case 3:OR();
		           break;
			case 4:NAND();
			   	   break;
			case 5:NOR();
		           break;
			case 6:EXOR();
		           break;
			case 7:exit(0);
				   break;
			default : 
				printf("Select a valid option\n");
		}
	}
}

