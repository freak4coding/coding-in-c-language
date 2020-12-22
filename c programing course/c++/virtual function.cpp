#include<iostream>
using namespace std;

class base{
	public:
	int i;
};
class derived1:virtual  public base{
	public:
	    int j;
};
class derived2:virtual public derived1{
	public:
		int k;
};
class derived3:virtual public derived2{
	public:
		int sum;
};
int main(){
	derived3 ob;
	ob.i=10;
	ob.j=20;
	ob.k=30;
	ob.sum=ob.i+ob.j+ob.k;	cout<<"i="<<ob.i<<"\nj="<<ob.j<<"\nk="<<ob.k<<endl;
	cout<<"sum="<<ob.sum;
	return 0; 
}
