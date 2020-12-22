#include<stdio.h>
#include<math.h>
void main(){
float l,b,r,a1,a,p;
printf("ENTER LENGTH AND BREADTH OF RECTANGLE\n");
scanf("%f%f",&l,&b);
printf("ENTER RADIUS OF CIRCLE\n");
scanf("%f",&r);
a1=l*b;
p=2.0*(l+b);
a=((22.0/7.0)*(r*r));
printf("AREA OF RECTANGLE=%f\n",a1);
printf("PERIMETER OF RECTANGLE=%f\n",p);
printf("AREA OF CIRCLE=%f\n",a);
}
