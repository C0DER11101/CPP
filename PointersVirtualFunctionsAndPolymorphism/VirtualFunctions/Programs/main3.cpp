#include<iostream>

using namespace std;

class Super{                            // abstract class
	
	public:

		virtual void whichClass()=0;
		virtual void greet()=0;
};

class Sub:public Super{

	public:
		void whichClass(){
			cout<<"Class: Sub\n";
		}

		void greet(){
			cout<<"\"Hello\" from Sub\n";
		}
};

int main(void){

	//Super super;                // ERROR: Cannot create object of abstract class!

	Super* super;

	Sub sub;

	super=&sub;

	super->whichClass();
	super->greet();

	return 0;
}
