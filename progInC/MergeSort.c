#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void main(){
	int i;
	clock_t start,end;
	FILE *fp;
	float cpu_time_used;
	start=clock();
	fp=fopen("Random.txt","w");
	srand(time(0));
	for(i=0;i<100;i++){
		fprintf(fp,"%d ",rand()%1000);
	}
	fclose(fp);
	end=clock();
	cpu_time_used=((double)(end-start))/CLOCKS_PER_SEC;
	printf("total execution time : %lf\n",cpu_time_used);
}
