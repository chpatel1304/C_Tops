#include<iostream>
using namespace std;
class A{
	public :
		void display(){
			cout<<"This is Parent Class";
		}
};
class B:public A{
	public:
		void display(){
			cout<<"This Is Child Class";
		}
	
};
main(){
	B obj;
	obj.display();
}
