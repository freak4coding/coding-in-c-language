#include<iostream>
using namespace std;
int main(){
	int x,r,sum=0;
	cout<<"Enter a number : ";
	cin>>x;
	do{
		r=x%10;
		sum=10*sum+r;
		x=x/10;
	}while(x!=0);
	cout<<"reverse : "<<sum;
}
