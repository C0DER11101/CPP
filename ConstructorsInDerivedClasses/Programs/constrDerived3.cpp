// Constructors in derived classes

#include<iostream>

using namespace std;

class Super{
	public:
		Super(int val){
			cout<<"Class Super: Argument value = "<<val<<"\n";
		}
};

class Sub:public Super{
	public:
		Sub(int val1, int val2):
			Super(val1){
			cout<<"Class Sub: Argument value = "<<val2<<"\n";   // Body of Sub() constructor!!
		}
};

int main(void){
	Sub sub(100, 120);

	return 0;
}
