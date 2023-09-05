#include<iostream>

using namespace std;

class overload{
	int val;

	public:

	overload(int val){
		this->val=val;
	}

	void operator++(int num){           // postfix operator
		cout<<"NUM = "<<num<<"\n";
		val++;
	}

	void show(){
		cout<<"Value = "<<val<<"\n";
	}
};

int main(void){

	overload obj(120);

	obj.show();

	obj++;         // now this is going to call the operator++() function, it's same as writing obj.operator++(0);

	obj.show();

	return 0;
}
