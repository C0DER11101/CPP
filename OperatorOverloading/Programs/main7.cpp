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

	friend Integer operator+(Integer first, Integer& second){
		first.val=first.val+second.val;

		return first;
	}

	void show(){
		cout<<"Value = "<<val<<"\n";
	}
};

int main(void){

	Integer first(10), second(20);

	cout<<"First integer:\n";
	first.show();
	cout<<"Second integer:\n";
	second.show();

	first=first+second;                      // equivalent to writing  first=operator+(first, second);

	cout<<"First integer:\n";
	first.show();
	cout<<"Second integer:\n";
	second.show();

	return 0;
}
