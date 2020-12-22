#include<stdio.h>
union student{
	char name[20];
	char gf[20];
	char stream[10];
	char section[5];
}s1,s2;

void main(){
	strcpy(s1.name,"AMIT");
	printf("name    : %s\n",s1.name);
	
	strcpy(s1.gf,"preeti");
	printf("gf      : %s\n",s1.gf);
	
	strcpy(s1.stream,"information technology");
	printf("stream  : %s\n",s1.stream);
	
	strcpy(s1.section,"khatarnaak");
	printf("section : %s\n\n",s1.section);


    strcpy(s2.name,"ABHIJEET");
    strcpy(s2.gf,"sweety");
    strcpy(s2.stream,"cse");
    strcpy(s2.section,"aafat");
    
    printf("name     :%s\n",s2.name);
    printf("gf       :%s\n",s2.gf);
    printf("stream   :%s\n",s2.stream);
    printf("section  :%s\n",s2.section);
}
