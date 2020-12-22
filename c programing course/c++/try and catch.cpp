#include<iostream>
using namespace std;
int main(){
	int x=20,y=10,z=10;
	int result1,result2;
	try{
		if((y-z)!=0)
		    result1=x/(y-z);
		else
		    throw(y-z);  //exception here
	}
	catch(int e){
		cout<<"error="<<e<<endl;
		cout<<"division by zero....";
	}
	result2=x/(y+z);
	cout<<"\nresult2="<<result2;
} 
