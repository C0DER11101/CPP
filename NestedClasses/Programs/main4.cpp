#include<iostream>

using namespace std;

class A{
	int a;

	protected:
	class B{
		int a;

		public:
		B(){
			a=200;
		}

		void show();
	};

	public:

	A(){
		a=100;
	}

	void show();
};

void A::show(){
	printf("A's a = %d\n", a);
	puts("show() of class A");
}

void A::B::show(){
	printf("B's a = %d\n", a);
	puts("show() of class B");
}

int main(void){
	A a;
	a.show();

	A::B b;            // ERROR! Class B is protected

	return 0;
}
