// Ambiguity in multiple inheritance

#include<iostream>

using namespace std;

class Super1{
	int sup1Val;

	public:
	void display(){
		sup1Val=100;
		cout<<"sup1Val = "<<sup1Val<<"\n";
	}
};

class Super2{
	int sup2Val;

	public:
	void display(){
		sup2Val=120;
		cout<<"sup2Val = "<<sup2Val<<"\n";
	}
};

class Sub:public Super1, public Super2{
	int subVal;

	public:
	void display(){
		subVal=140;
		cout<<"subVal = "<<subVal<<"\n";
	}
};

int main(void){

	Sub sub;

	sub.display();

	return 0;
}
