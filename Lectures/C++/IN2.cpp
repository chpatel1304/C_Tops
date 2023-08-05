#include<iostream>
using namespace std;
class A{
	public :
		void display(){
			cout<<"This is Grandfather Class";
		}
};
class B:public A{
	public:
		void display1(){
			cout<<"\n This Is Father Class";
		}
	
};
class C:public B{
	public:
		void display2(){
			cout<<"\n This Is Child Class";
		}
	
};
main(){
	C obj;
	obj.display();
	obj.display1();	
	obj.display2();
}
