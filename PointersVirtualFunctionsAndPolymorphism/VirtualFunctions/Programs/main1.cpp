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

	Super *super;

	Super base;
	Sub sub;

	super=&base;
	super->whichClass();
	super->greet();

	super=&sub;
	super->whichClass();
	super->greet();

	return 0;
}
