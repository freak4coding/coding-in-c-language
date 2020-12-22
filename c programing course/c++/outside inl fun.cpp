#include<iostream>
using namespace std;

class pure{
	public:
		void show();
};
inline void pure::show(){
	cout<<"Hi pagal";
}
int main(){
	pure obj;
	obj.show();
return 0;
}
