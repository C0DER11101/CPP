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

	super=&sub;

	super->display();                // STILL CALLS display() OF CLASS Super!

	return 0;
}
