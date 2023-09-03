#include<iostream>

using namespace std;

class Super1{
	public:
		Super1(int arg){
			cout<<"Class Super1: argumented value = "<<arg<<"\n";
		}
};

class Super2{
	public:
		Super2(int arg){
			cout<<"Class Super2: argumented value = "<<arg<<"\n";
		}
};

class Sub:public Super1, virtual public Super2{
	public:
		Sub(int arg1, int arg2):
			Super1(arg1), Super2(arg2){
				cout<<"Class Sub: doubled argumented value = "<<(arg2*2)<<"\n";
			}
};

int main(void){
	Sub sub(100, 120);
	return 0;
}
