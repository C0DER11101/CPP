#include<iostream>

using namespace std;

class overload{
	int val;

	public:

	overload(int val){
		this->val=val;
	}

	friend void operator-(overload& object){
		object.val=-object.val;
	}

	void show(){
		cout<<"Value = "<<val<<"\n";
	}
};

int main(void){
	overload obj(120);

	obj.show();

	-obj;              // equivalent to writing operator-(obj);

	obj.show();

	return 0;
}
