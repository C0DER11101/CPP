#include<iostream>

using namespace std;

class Super{
	int value1Super;

	protected:
	int value2Super;

	public:

	void showSuper(){
		value1Super=100;
		value2Super=120;
		cout<<"Value-1-Superclass: "<<value1Super<<" Value-2-Superclass: "<<value2Super<<"\n";
	}
};

class Sub:public Super{
	int value1Sub;

	protected:
	int value2Sub;

	public:
	void showSub(){
		value1Sub=140;
		value2Sub=160;
		value2Super=190;
		cout<<"Value-1-Subclass: "<<value1Sub<<" Value-2-Subclass: "<<value2Sub<<"\n";
		cout<<"Value-2-Superclass: "<<value2Super<<"\n";     // Can access protected data of the base class Super
	}
};

class Subsub:public Sub{
	int value1Subsub;

	protected:
	int value2Subsub;

	public:
	void showSubsub(){
		value1Subsub=180;
		value2Subsub=200;
		value2Super=190;
		cout<<"Value-1-Sub-subclass: "<<value1Subsub<<" Value-2-Sub-subclass: "<<value2Subsub<<"\n";
		cout<<"Value-2-Superclass: "<<value2Super<<"\n";  // Can access protected data of the base class Super
	}
};

int main(void){
	Subsub ssb;
	ssb.showSuper();
	ssb.showSubsub();

	Sub sub;
	sub.showSub();
	return 0;
}
