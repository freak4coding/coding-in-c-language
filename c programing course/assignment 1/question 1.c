#include<stdio.h>
#include<math.h>
void main(){
	float x,y;
	printf("ENTER TEMPERATURE IN FAHRENHEIT\n");
	scanf("%f",&x);
	printf("DEGREE CELSIUS=%f",y=((x-32.0)*(5.0/9.0)));
}
