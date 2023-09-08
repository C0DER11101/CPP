#include<iostream>

using namespace std;

class Super{
	const char*message;

	public:

	Super(): message("Super"){}

	void exceptionSuper(){
		cout<<message<<"\n";
	}
};

class Sub1: public Super{
	const char*message;

	public:

	Sub1(): message("Sub1"){}

	void exceptionSub1(){
		cout<<message<<"\n";
	}
};

class Sub2:public Super{
	const char*message;

	public:

	Sub2(): message("Sub2"){}

	void exceptionSub2(){
		cout<<message<<"\n";
	}
};

void test(){
	try{
		cout<<"In try() block of test()\n";
		cout<<"Throwing exception of type Sub1\n";

		Sub1 myException;

		throw myException;
	}

	catch(Sub2& s2){
		cout<<"In handler of test(), catch(Sub2& s2)\n";
		cout<<"Exception: ";
		s2.exceptionSub2();

		throw;
	}

	catch(Sub1& s1){
		cout<<"In handler of test(), catch(Sub1& s1)\n";
		cout<<"Exception: ";
		s1.exceptionSub1();

		throw;
	}

	catch(Super& s){
		cout<<"In handler of test(), catch(Super& s)\n";
		cout<<"Exception: ";
		s.exceptionSuper();

		throw;
	}
}

int main(void){

	try{
		cout<<"In try block of main()\n";

		test();
	}
	
	catch(Sub2& s2){
		cout<<"In handler of main(), catch(Sub2& s2)\n";
		cout<<"Exception: ";
	       	s2.exceptionSub2();
	}

	catch(Sub1& s1){
		cout<<"In handler of main(), catch(Sub1& s1)\n";
		cout<<"Exception: ";
	       	s1.exceptionSub1();
	}

	catch(...){
		cout<<"In handler of main(), catch(...)\n";
	}

	return 0;
}
