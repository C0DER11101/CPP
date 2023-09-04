#include<iostream>

using namespace std;

class overload{
	int val;

	public:

	overload(int val){
		this->val=val;
	}

	void operator-(){
		cout<<"Member function!\n";
		val=-val;
	}

	friend void operator-(overload& object){
		cout<<"Friend function!\n";
		object.val=-object.val;
	}

	void show(){
		cout<<"Value = "<<val<<"\n";
	}
};

int main(void){
	overload obj(120);

	obj.show();

	//-obj;               // this call is ambiguous as we have both: a friend operator function and a same operator function as a member function of the class.

	obj.show();

	return 0;
}
