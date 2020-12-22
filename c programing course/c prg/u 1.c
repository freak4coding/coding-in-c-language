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
	
	strcpy(record1.name,"AMIT");
	record1.percentage=96.45;
	strcpy(record1.subject,"MATHS");
	
	printf("union record1 value example\n\n");
	printf("name       : %s\n",record1.name);
	printf("percentage : %f\n",record1.percentage);
	printf("subject    : %s\n\n",record1.subject);
	
	printf("union record2 value example\n\n");
	strcpy(record2.name,"AMIT");
	printf("name       : %s\n",record2.name);
	strcpy(record2.subject,"MATHEMATICS");
	printf("subject    : %s\n",record2.subject);
	record2.percentage=91.00;
	printf("percentage : %f\n",record2.percentage);
	
	return 0;
}
