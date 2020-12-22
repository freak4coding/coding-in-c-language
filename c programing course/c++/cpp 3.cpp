#include<iostream>
using namespace std; 
class abc{
 	int a,b,c,s;
 	public:
 		int sum(){
 			cout<< "get methode of abc\n";
 			cout<< "ENTER VALUE FOR a\n";
		    cin>>a;
		    cout<< "ENTER VALUE FOR b\n";
		    cin>>b;
		    cout<< "ENTER VALUE FOR c\n";
		    cin>>c;
		    s=a+b+c;
	    return s;
		}
 };
int main(){
 	 int x;
	 abc o;
 	
	 x=o.sum();
 	cout<< "Addition of abc="<<x;
return 0;
 }
