#include<stdio.h>
#include<stdlib.h>
void main(){
	int a[10];
	int i;
	FILE *p1,*p2,*p3,*p4;
	p1=fopen("input.txt","w");
	printf("Enter integer input:");
	for(i=0;i<10;i++){
		scanf("%d",&a[i]);
		fprintf(p1,"%d ",a[i]);
	}
	/*	for(i=0;i<10;i++){
			fprintf(p1,"%d ",a[i]);
		}*/
	fclose(p1);
	
	p2=fopen("input.txt","r");
	p3=fopen("even.txt","w");
	p4=fopen("odd.txt","w");
	for(i=0;i<10;i++){
	fscanf(p2,"%d",&a[i]);
		if(a[i]%2==0){
			fprintf(p3,"%d ",a[i]);
		}else{
			fprintf(p4,"%d ",a[i]);
		}
	}
	fclose(p2);
}
