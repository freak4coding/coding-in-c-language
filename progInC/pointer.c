#include<stdio.h>
void input(int *p){
	int i;
	for(i=0;i<5;i++)
		scanf("%d",p+i);
}
void display(int *p){
	int i;
	for(i=0;i<5;i++)
		printf("%d ",*(p+i));
}
void sorting(int *p){
	int i,j,t;
	for(i=1;i<5;i++){
		for(j=0;j<5-i;j++){
			if(*(p+j)>*(p+j+1)){
			t=*(p+j);
			*(p+j)=*(p+j+1);
			*(p+j+1)=t;
			}
		}
	}
}
void main(){
	int a[5],*p;
	p=&a[0];
	printf("enter five values : ");
	input(p);
	printf("Unsorted list : ");
	display(p);
	sorting(p);
	printf("\nSorted list : ");
	display(p);
}
