#include<iostream>
using namespace std;
class atm{
	public:
	int a;
	int p;
	int acc_bal;
	int option,amount;
	int tm=200000;
		void authentication(){
			cout<<"ENTER ACC NO : ";
			cin>>a;
			cout<<"ENTER PIN NO : ";
			cin>>p;	
		}
		void instruction(){
			cout<<"select an option"<<endl;
			cout<<"1:withdraw  2:view balance"<<endl;
			cin>>option;
			switch(option){
				case 1: cout<<"enter amount: ";
						cin>>amount;
				    if(tm==0){
				    	cout<<"sorry balance not available";
					}else if(amount%50!=0){
						cout<<"please enter valid amount";
					}else if(amount>=40000){
						cout<<"please enter valid amount(<40,000)";
					}else{
						cout<<"transection is being proceeded";
					}
			    	  break;
			    case 2: cout<<"total balance="<<acc_bal<<endl;
			    	  break;
			}
		}
};
class user_info{
	public:
	string account_no;
	int pin_no;
	int acc_balance;
	void detail(){
		account_no;
	}
};
int main(){
	atm a1;
	a1.authentication();
	a1.instruction();
}
