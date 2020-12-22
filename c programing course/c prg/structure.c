#include<stdio.h>
struct student{
	int roll_no;
	char name[20];
	float average;
};
void main(){
	struct student s1={25,"amit",90.95};
	printf("%d\n%s\n%f\n",s1.roll_no,s1.name,s1.average);
}
