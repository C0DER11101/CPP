// Run-time polymorphism

#include<iostream>

using namespace std;

class Super{

	public:
		virtual void whichClass(){
			cout<<"Class: Super\n";
		}

		virtual void greet(){
			cout<<"From Super: \"Hello\"\n";
		}
};

class Sub:public Super{

	public:
		virtual void whichClass(){
			cout<<"Class: Sub\n";
		}

		virtual void greet(){
			cout<<"From Sub: \"Hello\"\n";
		}
};

int main(void){
	Sub*sub;

	Super base;
	Sub derived;

	//sub=&base;                       // ERROR: a pointer to the derived class cannot store the address of an object of the super class

	return 0;
}
