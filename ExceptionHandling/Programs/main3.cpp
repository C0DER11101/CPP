#include<iostream>

using namespace std;

class Test1{

	public:
		Test1(){
			cout<<"Constructing an object of Test1\n";
		}

		~Test1(){
			cout<<"Destroying an object of Test1\n";
		}
};

class Test2{

	public:
		Test2(){
			cout<<"Constructing an object of Test2\n";
			throw 20;
		}

		~Test2(){
			cout<<"Destroying an object of Test2\n";
		}
};

int main(void){

	try{
		Test1 t1a;

		Test2 t2a;              // Destructor for this object will not be called, because it's an incomplete object!

		Test1 t1b;
	}

	catch(int val){
		cout<<"Caught"<<val<<"\n";
	}

	return 0;
}
