#include<iostream>
#include<string>
using namespace std;
class cricket{
	public:
	string n;
	int c,d;
	float a,b,s;
		void batsman(){
			cout<<"ENTER NAME\n";
			cin>>n;
			//strcpy(cricket.n,"amit");
			cout<<"ENTER Run scored\n";
			cin>>a;
			cout<<"ENTER ball fased\n";
			cin>>b;
			cout<<"ENTER total fours\n";
			cin>>c;
			cout<<"ENTER total sixes\n";
			cin>>d;
			s=(a/b)*100;
			
			cout<<"\nname  ="<<n;
			cout<<"\nrun scored="<<a;
			cout<<"\nball faced="<<b;
			cout<<"\nfours="<<c;
			cout<<"\nsixes="<<d;
			cout<<"\nstrike rate="<<s;
		}
};
int main(){
	int option;
	cricket p1,p2;
	p1.batsman();
	cout<<"\n\n";
	p2.batsman();
	if(p1.a>p2.a){
		cout<<"\nmax run getter="<<p1.n;
	}else if(p1.a<p2.a){
		cout<<"\n\nmax run getter="<<p2.n;
	}else{
	    cout<<"\n\nboth batsman scored same run";
	}
	cout<<"\n\nselect an option";
		cout<<"\n1: player1 \n2: player2\n";
		cin>>option;
	switch(option){
		case 1:cout<<"\nname="<<p1.n;
		       cout<<"\nrun scored="<<p1.a;
		       cout<<"\nball faced="<<p1.b;
		       cout<<"\nfours="<<p1.c;
		       cout<<"\nsixes="<<p1.d;
		       cout<<"\nstrike rate="<<p1.s;
		     break;
		case 2:cout<<"\nname="<<p2.n;
		       cout<<"\nrun scored="<<p2.a;
		       cout<<"\nball faced="<<p2.b;
		       cout<<"\nfours="<<p2.c;
		       cout<<"\nsixes="<<p2.d;
		       cout<<"\nstrike rate="<<p1.s;
		     break;
	}
}
