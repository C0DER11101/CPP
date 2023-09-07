// SOLUTION-1

#include<iostream>

using namespace std;

class Super{

	public:
		void display(){
			cout<<"In Super\n";
		}
};

class Sub: public Super{

	public:
		void display(){
			cout<<"In Sub\n";
		}
};

int main(void){

	Super* super;

	Super base;
	Sub sub;

	super=&base;

	super->display();

	Sub*subPtr;

	subPtr=&sub;

	subPtr->display();                // CALLS display() OF CLASS Sub!

	return 0;
}
