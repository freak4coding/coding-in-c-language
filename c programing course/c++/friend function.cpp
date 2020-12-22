#include<iostream>
using namespace std;

class frnddemo{
	int a,b;
	public:
		friend int sum(frnddemo fd);
		void setvalue(int i,int j);
};
void frnddemo::setvalue(int i,int j){
	a=i;
	b=j;
}
int sum(frnddemo x){
	return x.a+x.b;
}
int main(){
	frnddemo fnd;
	fnd.setvalue(30,40);
	cout<<"sum="<<sum(fd_ob);
}
