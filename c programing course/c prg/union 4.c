#include<stdio.h>
#include<string.h>
union student{
	char name[20];
	char subject[20];
	float percentage;
};
int main(){
	union student record1;
	union student record2;
	
	strcpy(record1.name,"amit");
	strcpy(record1.subject,"maths");
	record1.percentage=96.45;
	
	printf("union record1 value example\n");
	printf("name : %s\n",record1.name);
	printf("name : %s\n",record1.subject);
	printf("name : %f\n",record1.percentage);
	
	printf("union record2 value example\n");
	strcpy(record2.name,"abhijeet");
	printf("name : %s\n",record2.name);
	strcpy(record2.subject,"maths");
	printf("name : %s\n",record2.subject);
	record1.percentage=91;
	printf("name : %f\n",record2.percentage);
	
	getch();
	return 0;
}
