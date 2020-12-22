#include<iostream>
using namespace std;

inline int sum(int x,int y){
	if(x%2==0 && y%2==0)
	   return x+y;
	else
	   return x*y;
}
int main(){
	int a,b,s;
	cout<<"ENTER VALUE OF a\n";
	cin>>a;
	cout<<"ENTER VALUE OF b\n";
	cin>>b;
	s=sum(a,b);
	cout<<"result="<<s;
	return 0;
}
