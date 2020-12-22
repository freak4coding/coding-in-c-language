#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
typedef struct student{
	int roll_no;
	char name[20];
	float average;
}stu;
void main(){
	stu s1;
	printf("ENTER ROLL NO\n");
	scanf("%d",&s1.roll_no);
	strcpy(s1.name,"AMIT");
    printf("ENTER average marks\n");
	scanf("%f",&s1.average);
	printf("%d\n%f\n%s",s1.roll_no,s1.average,s1.name);
	getch();
}
