#include<iostream>
using namespace std;
class abc{
	public:
		abc(){
			cout<<"default constructor of abc\n";
		}
};
class xyz :public abc
{
	public:
	xyz(){
		cout<<"def cns of xyz";
	}
};
int main(){
	xyz o1;
	//o1.detail();
}
