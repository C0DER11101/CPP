#include<iostream>

using namespace std;

class A{
	int a;
	public:
	class B{
		int a;
		public:
		B(){
			a=1000;
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

	A::B b;
	b.show();

	return 0;
}
