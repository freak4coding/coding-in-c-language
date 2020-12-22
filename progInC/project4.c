#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
typedef struct student{
	int roll;
	char name[20];
	char address[100];
}stud;
void main(){
	FILE *f1,*f2,*f3;
	int i,n;
	stud s;
	printf("enter total no of student : ");
	scanf("%d",&n);
	s=(stud*)malloc(n*sizeof(stud));
	
	f1=fopen("stud.txt","w");
	for(i=0;i<n;i++){
		printf("Enter name of stud-%d : ",i);
		gets(stud[i].name);
		fprintf(f1,"%s\n",stud[i].name);
	
		printf("Enter address of student-%d : ",i);
		gets(stud[i].address);
		fprintf(f1,"%s\n",stud[i].address);
		
		printf("Enter roll of student-%d : ",i);
		scanf("%d",&stud[i].roll);
		fprintf(f1,"%d\n",stud[i].roll);
	}
	fclose(f1);
}
