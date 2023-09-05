// compile-time polymorphism via classes

#include<iostream>

using namespace std;

class Integer{
	int value;

	public:

	Integer(){
		value=0;
	}

	Integer(int val):value(val){}

	Integer operator+(Integer second){
		value=value+second.value;

		return *this;
	}

	Integer operator+(int value){
		this->value=this->value+value;

		return *this;
	}

	void operator++(){      // prefix incrementation
		cout<<"Prefix incrementation\n";
		++value;
	}

	void operator++(int n){  // postfix incrementation
		cout<<"Postfix incrementation\n";
		value++;
	}

	friend ostream& operator<<(ostream& out, Integer integer){
		out<<integer.value;

		return out;
	}
};

int main(void){

	Integer first(10), second(30);

	cout<<"Integers:\n";
	cout<<"First integer = "<<first<<"\n";
	cout<<"Second integer = "<<second<<"\n";

	first++;
	++second;

	cout<<"Integers:\n";
	cout<<"First integer = "<<first<<"\n";
	cout<<"Second integer = "<<second<<"\n";

	first=first+second;

	cout<<"Integers:\n";
	cout<<"First integer = "<<first<<"\n";
	cout<<"Second integer = "<<second<<"\n";

	first=first+100;

	cout<<"Integers:\n";
	cout<<"First integer = "<<first<<"\n";
	cout<<"Second integer = "<<second<<"\n";

	return 0;
}
