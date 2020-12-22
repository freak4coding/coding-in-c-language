#include<stdio.h>
#include<conio.h>
#include<string.h>
struct student{
	int roll_no;
	char name[20];
	float average;
};
void main(){
	struct student s1;
	printf("ENTER ROLL NO\n");
	scanf("%d",&s1.roll_no);
    printf("ENTER average marks\n");
	scanf("%f",&s1.average);
	printf("%d\n",s1.roll_no);
	printf("%s\n",s1.name);
	printf("%f",s1.average);
	getch();
}
