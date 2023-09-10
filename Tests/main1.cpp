#include<iostream>

using namespace std;

class A{
	protected:
		int m;

	public:
		virtual void methodA()=0;
};

class B:public A{

	public:

		void methodA(){
			puts("Method of A");
		}

		void methodB(){
			puts("Method of B");
		}
};

int main(void){

	A*a=new B;

	a->methodA();
	//a->methodB();         // even though A is an abstract class, the run-time polymorphism occurs only for the pure virtual functions but the rest is just compile-time polymorphism, so don't think that even though 'a' is a pointer to class A then since it's an abstract, the compiler will decide in the run-time which method to call, because methodB() is not a pure virtual method, it's just a method of class B. So, there is no run-time polymorphism here! It's only compile-time polymorphism!! 'a' is still a pointer to the base class an the base class doesn't have any method named methodB(). So, this line is an ERROR!!!!

	free(a);

	return 0;
}
