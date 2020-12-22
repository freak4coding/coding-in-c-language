#include<stdio.h>
#include<stdlib.h>
void main(){
	int a[10];
	int i,sum=0;
	float avg=0.0;
	FILE *fp;
	
	fp=fopen("number.txt","w");
	printf("enter ten integers:");
		for(i=0;i<10;i++){
			scanf("%d",&a[i]);
			fprintf(fp,"%d ",a[i]);
		}
		fclose(fp);
	fp=fopen("number.txt","r");
		for(i=0;i<10;i++){
			fscanf(fp,"%d",&a[i]);
			sum+=a[i];
		}
	printf("sum=%d\n",sum);
	printf("average=%f\n",avg=sum/10.0);
	fclose(fp);
}
