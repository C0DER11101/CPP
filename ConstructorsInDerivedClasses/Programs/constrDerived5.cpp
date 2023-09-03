// Constructors in derived classes

#include<iostream>

using namespace std;

class Super{

	public:
		Super(int val){
			cout<<"Class Super: Argumented value = "<<val<<"\n";
		}
};

class Sub:public Super{

	public:
		/*
		Sub(){                    // ERROR: derived class can't have a default constructor when the super class has a parameterized one!!
			cout<<"Class Sub: No argumented value!\n";
		}
		*/
};

int main(void){
	//Sub sub;
	return 0;
}
