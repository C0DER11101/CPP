#include<iostream>

using namespace std;

class Super{
	int value1;

	public:

	void show(){
		value1=100;
		cout<<"Value-1: "<<value1<<"\n";
	}
};

class Sub:public Super{
	int value2;

	public:
	
	void show(){
		value2=120;
		cout<<"Value-2: "<<value2<<"\n";
	}
};

int main(void){

	Sub sub;

	sub.show();      // show() of class Sub is called

	return 0;
}
