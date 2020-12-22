#include<iostream>
using namespace std;

class pappu{
	int a,i;
	char b[20];
	float c;
	public:
		void detail(){
		    cout<<"ENTER ROLL NO\n";
			cin>>a;
			cout<<"ENTER BRANCH\n";
			cin>>b[i];
			c=95.25f;
			cout<<"roll no ="<<a; 
			cout<<"stream="<<b[i];
			cout<<"\navg mrx ="<<c;
		}
};
int main(){
	pappu d1;
	d1.detail();
	return 0;
}
