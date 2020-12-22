#include<stdio.h>
struct student{
	int roll;
	int age;
};
struct stud_det{
	char name[20];
	char dep[10];
	struct student s1;
};
void main(){
	struct stud_det sd1={"AMIT","IT"};
	sd1.s1.roll=420;
	sd1.s1.age=19;
	printf("%d\n%d\n%s\n%s",sd1.s1.roll,sd1.s1.age,sd1.name,sd1.dep);
}
