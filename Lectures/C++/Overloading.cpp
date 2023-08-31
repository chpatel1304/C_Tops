#include<iostream>
using namespace std;
class person {
	public :
		void run(){
			cout<<"Person Is Running";
		}
};
class boy:public person {
	public :
		void run(){
			cout<<"Boy Is Running";
		}
};
int main(){
	boy obj;
	obj.run();
	return 0;
}
