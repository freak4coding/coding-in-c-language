#include<stdio.h>
#include<string.h>
void main(){
	int i,lineNo=0;
	char a[50];
	FILE *fp;
	fp=fopen("input.txt","r");
	if(fp!=NULL){
		while(!feof(fp)){
			while(!"\n"){
				fscanf(fp,"%[^\n]",&a);
			}
		}
	}
}
