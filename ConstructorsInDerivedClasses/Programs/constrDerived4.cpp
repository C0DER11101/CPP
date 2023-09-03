// Constructors in derived classes

#include<iostream>

using namespace std;

class Super{

	public:
		Super(int val){
			cout<<"Class Super: Argumented value = "<<val<<"\n";
		}
};

class Sub:public Super{
	// ERROR:  must provide a parameterized constructor to class Sub. It's MANDATORY because the super class has a parameterized constructor. When the super class has a parameterized constructor then so must its subclasses!!
};

int main(void){
	//Sub sub;
	return 0;
}
