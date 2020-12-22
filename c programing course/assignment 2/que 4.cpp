#include<stdio.h>
int main(){
	int x,z;
	float y;
	printf("ENTER HARDNESS\n");
	scanf("%d",&x);
	printf("ENTER CARBON CONTENT\n");
	scanf("%f",&y);
	printf("ENTER TENSILE STRENGTH\n");
	scanf("%d",&z);
	if(x>50 && y>0.7 && z>5600){
		printf("grade 10\n");
	}else if(x>50 && y>0.7 && z<=5600){
		printf("grade 9\n");
	}else if(x<=50 && y>0.7 && z>5600){
		printf("grade 8\n");
	}else if(x>50 && y<=0.7 && z>5600){
		printf("grade 7\n");
	}else if(x>50 || y>0.7 || z>5600){
		printf("grade 6\n");
	}else{
		printf("grade 5");
	}
return 0;
}
