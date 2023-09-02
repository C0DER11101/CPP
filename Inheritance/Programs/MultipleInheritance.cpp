#include<iostream>

using namespace std;

class Super1{
	int super1Val;

	public:

	void showSuper1(){
		super1Val=100;
		cout<<"super1Val = "<<super1Val<<"\n";
	}
};

class Super2{
	int super2Val;

	public:

	void showSuper2(){
		super2Val=120;
		cout<<"super2Val = "<<super2Val<<"\n";
	}
};

class Super3{
	int super3Val;

	public:

	void showSuper3(){
		super3Val=140;
		cout<<"super3Val = "<<super3Val<<"\n";
	}
};

class Sub:public Super1, public Super2, public Super3{
	int subVal;

	public:

	void showSub(){
		subVal=160;
		cout<<"subVal = "<<subVal<<"\n";
	}
};

int main(void){

	Sub sub;

	sub.showSuper1();
	sub.showSuper2();
	sub.showSuper3();
	sub.showSub();

	return 0;
}
