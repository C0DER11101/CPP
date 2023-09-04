#include<iostream>

using namespace std;

class overload{
	int val;

	public:

	overload(int val){
		this->val=val;
	}

	void operator++(){
		val++;
	}

	void show(){
		cout<<"Value = "<<val<<"\n";
	}
};

int main(void){

	overload obj(120);

	obj.show();

	++obj;        // same as writing obj.operator++();

	obj.show();

	//obj++;          // ERROR: not the same as writing obj.operator++(); because by default the definition of operator++() is for prefix incrementation

	//obj.show();

	return 0;
}
