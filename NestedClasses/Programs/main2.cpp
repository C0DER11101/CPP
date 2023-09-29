#include<iostream>

using namespace std;

class A{
	int a;

	class B{
		int b;

		public:
		B(){
			puts("Constructor of class B");
		}

		void show(){
			puts("show() of B");
		}
	};

	public:
	A(){
		puts("Constructor of class A");
	}

	void show(){
		puts("show() of A");
		A::B b;   // since class B is private, so we can only create objects of class B inside member functions of class A and in member functions of class B
		b.show();
	}
};

int main(void){
	A a;
	a.show();
	return 0;
}
