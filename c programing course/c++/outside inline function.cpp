#include<iostream>
using namespace std;

class pure{
	public:
		void show();
};
inline void pure::show(){
	cout<<"hi pagal";
}
int main(){
	pure obj;
	obj.show();
return 0;
}
