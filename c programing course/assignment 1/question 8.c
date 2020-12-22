#include<stdio.h>
void main(){
	int i,t=0;
	float avg,p;
	float a[5];
	for(i=0;i<5;i++){
		printf("ENTER MARKS OF SUBJECT %d\n",i+1);
		scanf("%f",&a[i]);
	}
	for(i=0;i<5;i++){
	    t=t+a[i];
	}
	printf("total marks=%d\n",t);
	printf("averagr marks=%f\n",avg=t/5.0);
	printf("percentage=%f\n",p=(t*100)/500.0);
	
}
