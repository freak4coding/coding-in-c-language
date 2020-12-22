#include<stdio.h>
//#define arr[5]{1,2,3,4,5}
int main(){
	int i,j,k,x[]={1,2,3,4,5,6};
	//int x2[]={5,2,2,7,1,0};
	//int x3[];
	/*result=x[0];
	for(i=1;i<4;i++){
	if(result<x[i])
		continue;
		result=x[i];
	}*/
	j=++x[2];
	k=x[1]++;
	i=x[j++];
	printf("i=%d\nj=%d\nk=%d",i,j,k);
	return 0;
}
