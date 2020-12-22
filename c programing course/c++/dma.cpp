#include<iostream>
using namespace std;
int main(){
	int *p=new int[5];
	p[1]=5;
	p[3]=8;
	p[4]=6;
	cout<<p[1]<<endl;
	cout<<p[3]<<endl;
	cout<<p[4];
}
