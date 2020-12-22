#include<stdio.h>
#include<conio.h>
#include<string.h>
union student{
	int roll_no;
	char name[20];
	float average;
}s1;
void main(){
	union student s1;
	printf("ENTER ROLL NO\n");
	scanf("%d",&s1.roll_no);
	printf("ENTER NAME\n");
	scanf("%s",&s1.name);
    printf("ENTER average marks\n");
	scanf("%f",&s1.average);
	printf("%d\n%f\n%s",s1.roll_no,s1.average,s1.name);
	getch();
}
