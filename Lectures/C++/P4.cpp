#include<iostream>
using namespace std;
class demo{
	public:
		int age;
		string name;
		void setinput(int age){
			this->age=age;
		}
		int getinput(){
			return age;
		}
		void setinput1(string name){
			this->name=name;
		}
		string getinput1(){
			return name;
		}
};
main(){
	demo d;
	d.setinput(20);
	d.setinput1("Chirag");
	cout<<d.getinput()<<"\n";
	cout<<d.getinput1();
}
