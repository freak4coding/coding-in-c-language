#include<iostream>
using namespace std;
int main(){
	int x,f=1;
	cout<<"Enter a number : ";
	cin>>x;
	if(x==1 || x==0){
		cout<<"factorial = 1";
	}else{
	    while(x!=1){
		   f=f*x;
		   x--;
	    }
	cout<<"factorial = "<<f;
    }
}
