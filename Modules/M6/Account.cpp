#include<iostream>
using namespace std;
class Account{
	public:
		String name,type;
		int acc_num;
		Account(){
			cout<<"Enter Name :\n";
			cin>>name;
			cout<<"Enter Type :\n";
			cin>>type;
			cout<<"Enter Number  :\n";
			cin>>acc_num;
		}
}; Rs
class current:public Account{
	public :
		int bal=0,sc=0,wd;
		current(){
			cout<<"Enter Your Balance :\n";
			cin>>bal;
			if(bal<=5000){
				cout<<"You will be charged 100rs !";
				bal=bal-100;
			}
			else{
			cout<<"Do you want to withdraw money?(0 for no, 1 for yes)";
				cin>>ch;
				if(ch==1)
				{
					cout<<"Enter money to withdraw";
					cin>>wd;
					bal-=wd;
					cout<<"Balance is "<<bal;
				}
				else if(ch==2)
				{
					cout<<"Thank you for visiting";
				}
				else
				{
					cout<<"Invalid input";
				}
			}
		}
};
class saving:public account{
	public:
		int p,r,t;
		saving()
		{
			cout<<"Enter savings balance:";
			cin>>p;
			cout<<"Your interest is "<<(p*10*1)/100<<" for 1 year at 10% rate of interest";
			p-=(p*10*1)/100;
		}
};

main()
{
	int s;
	cout<<"1.Current\n2.Savings\nSelect:";
	cin>>s;
	if(s==1)
	{
		current obj;
	}
	else if(s==2)
	{
		saving obj1;
	}
	else
	{
		cout<<"Invalid input";
	}
}
