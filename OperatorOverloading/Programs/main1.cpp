// Unary operator overloading

#include<iostream>

using namespace std;

class overload{
	int val;

	public:
	overload(int val){
		this->val=val;
	}

	void operator-();

	void show();
};

void overload::operator-(){
	val=-val;
}

void overload::show(){
	cout<<"Val = "<<val<<"\n";
}

int main(void){

	overload overLoad(120);

	overLoad.show();
	-overLoad;          // equivalent to writing overLoad.operator-();
	overLoad.show();

	return 0;
}
