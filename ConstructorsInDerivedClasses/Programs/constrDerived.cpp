// constructors in derived classes

#include<iostream>

using namespace std;

class Super{
	int supVal;
};

class Sub:public Super{
	public:
		Sub(){              // No problem!! Since the super class doesn't have any constructors!!
			cout<<"Object created!\n";
		}

		Sub(int val){       // No problem!! Since the super class doesn't have any constructors!!
			cout<<"Argument value = "<<val<<"\n";
		}
};

int main(void){

	Sub sub1;
	Sub sub2(100);
	return 0;
}
