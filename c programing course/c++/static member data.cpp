#include<iostream>
using namespace std;

class abc{
	static int count;
	public:
		void show(){
		    cout<<"\ncount="<<count;
		}
};

int abc::count=20;

int main(){
	abc o1,o2;
	o1.show();
	o2.show();
	return 0;
}
