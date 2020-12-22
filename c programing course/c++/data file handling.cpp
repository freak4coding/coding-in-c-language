#include<iostream>
#include<fstream>
using namespace std;
int main(){
	int marks,roll_no;
    ofstream fout;
	fout.open("abc.dat",ios::out);
	cout<<"enter your roll no : ";
	cin>>roll_no;
	cout<<"enter your marks : ";
	cin>>marks;
	fout<<roll_no;
	fout<<marks;
	fout.close();	
}
