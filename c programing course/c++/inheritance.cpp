#include<iostream>
using namespace std;
class abc{
	private:
		int priv_a;
	protected:
		int prot_b;
	public:
		int pub_c;
};
class xyz:public abc{
	public:
	  void fn(); 
};
int main(){
	abc o1;
	//o1.priv_a=1;
	//o1.prot_b=1;
	o1.pub_c=1;
	
	xyz obj1;
	//obj1.priv_a=1;
	//obj1.prot_b=1;
	obj1.pub_c=1;
}
