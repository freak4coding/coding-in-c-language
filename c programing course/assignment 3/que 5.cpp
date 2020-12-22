#include<iostream>
using namespace std;
int main(){
    int x,i,n=10,sum=0;
    cout<<"sum = ";
	for(x=2;x<=n;x++){
		for(i=1;i<=x;i++){
			sum=sum+1;
		}
		cout<<sum<<" ";
	}
}
