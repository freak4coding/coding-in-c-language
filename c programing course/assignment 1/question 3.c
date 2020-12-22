#include<stdio.h>
#include<math.h>
void main(){
int x,sum=0;
float y;
printf("ENTER A FIVE DIGIT NUMBER\n");
scanf("%d",&x);
   while(x!=0){
   y=x%10;
   sum=sum+y;
   x=x/10;
   }
   printf("sum of digits=%d",sum); 
}
