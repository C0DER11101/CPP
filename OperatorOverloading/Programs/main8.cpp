#include<iostream>

using namespace std;

class Integer{
	int val;

	public:
	
	Integer(){
		val=0;
	}

	Integer(int val){
		this->val=val;
	}

	friend void operator-(Integer& integer){
		integer.val=-integer.val;
	}

	friend void operator++(Integer& integer){
		integer.val++;
	}

	friend void operator++(Integer& integer, int num){
		integer.val++;
	}

	void show(){
		cout<<val<<"\n";
	}
};

int main(void){

	Integer integer(20);

	cout<<"Integer value = ";
	integer.show();

	-integer;
	cout<<"Integer value = ";
	integer.show();

	++integer;                      // prefix incrementation : equivalent to writing operator++(integer);
	cout<<"Integer value = ";
	integer.show();

	integer++;                      // postfix incrementation: equivalent to writing operator++(integer);
	cout<<"Integer value = ";
	integer.show();

	return 0;
}
