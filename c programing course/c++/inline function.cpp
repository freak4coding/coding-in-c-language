#include <iostream>
using namespace std;

inline float multi(int x,int y){
	return x*y;
}
int main() {
    int a,b;
    cin>>a;
    cin>>b;
	cout<<"multiplication="<<multi(a,b);
	return 0;
}
