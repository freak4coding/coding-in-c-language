#include<iostream>
using namespace std;
int main(){
	int x,i,a=1;
	cout<<"prime numbers : ";
	for(x=2;x<=999;x++){
		for(i=2;i<=x/2;i++){
			if(x%i==0){
				a=0;
				break;
			}else{
				a=1;
			}
		}
		if(a==1)
			cout<<x<<" ";
    }
}
