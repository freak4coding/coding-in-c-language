#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
void ipCheck(int a,int b,int c,int d){
	if(a<0 || b<0 || c<0 || d<0 || a>255 || b>255 || c>255 || d>255)
		printf("Invalid ip address ..!!");
	else{
		if(a>=0 && a<=127){
			printf("Class - A\n");
			printf("Leading Bit = 0\n");
			printf("Size of network = 8\n");
			printf("Size of test bit = 24\n");
			printf("No of network = %lf\n",pow(2,7));
			printf("Address per network = %lf\n",pow(2,24));
			printf("Starting address = 0.0.0.0\n");
			printf("End address = 127.255.255.255\n");
			printf("Subnet mask = 255.0.0.0\n");
		}
		if(a>=128 && a<=191){
			printf("Class - B\n");
			printf("Leading Bit = 10\n");
			printf("Size of network = 16\n");
			printf("Size of test bit = 16\n");
			printf("No of network = %lf\n",pow(2,14));
			printf("Address per network = %lf\n",pow(2,16));
			printf("Starting address = 128.0.0.0\n");
			printf("End address = 191.255.255.255\n");
			printf("Subnet mask = 255.255.0.0\n");
		}
		if(a>=192 && a<=223){
			printf("Class - C\n");
			printf("Leading Bit = 110\n");
			printf("Size of network = 24\n");
			printf("Size of test bit = 8\n");
			printf("No of network = %lf\n",pow(2,21));
			printf("Address per network = %lf\n",pow(2,8));
			printf("Starting address = 192.0.0.0\n");
			printf("End address = 223.255.255.255\n");
			printf("Subnet mask = 255.255.255.0\n");
		}
		if(a>=224 && a<=239){
			printf("Class - D\n");
			printf("Leading Bit = 1110\n");
			printf("Size of network = ND\n");
			printf("Size of test bit = ND\n");
			printf("No of network = ND\n");
			printf("Address per network = ND\n");
			printf("Starting address = 224.0.0.0\n");
			printf("End address = 239.255.255.255\n");
			printf("Subnet mask = ND\n");
		}
		if(a>=240 && a<=255){
			printf("Class - E\n");
			printf("Leading Bit = 1111\n");
			printf("Size of network = ND\n");
			printf("Size of test bit = ND\n");
			printf("No of network = ND\n");
			printf("Address per network = ND\n");
			printf("Starting address = 240.0.0.0\n");
			printf("End address = 255.255.255.255\n");
			printf("Subnet mask = ND\n");
		}
	}
}
int main(){
	int a=0,b=0,c=0,d=0,count=0;
	char ip[20],*op1,*op2,*op3,*op4;
	printf("Enter ip address : ");
	gets(ip);
	for(int i=0;i<strlen(ip);i++){
		if(ip[i]=='.')
			count++;
	}
	if(count>3)
		printf("Invalid ip address !");
	else{
		op1=strtok(ip,".");
		a=atoi(op1);
		op2=strtok(NULL,".");
		b=atoi(op2);
		op3=strtok(NULL,".");
		c=atoi(op3);
		op4=strtok(NULL,"\n");
		d=atoi(op4);
		ipCheck(a,b,c,d);
	}
return 0;
}
