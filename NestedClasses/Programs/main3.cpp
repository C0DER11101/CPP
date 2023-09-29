#include<iostream>

using namespace std;

class A{
	int a;

	public:
	class B{
		int a;

		public:
		B(){
			a=200;
			puts("Constructor of class B");
		}

		void show(){
			printf("B's a = %d\n", a);
			puts("show() of class B");
		}
	};

	A(){
		a=300;
		puts("Constructor of class A");
	}

	void show(){
		printf("A's a = %d\n", a);
		puts("show() of class A");
	}
};

int main(void){
	A a;
	A::B b;
	a.show();
	b.show();
	return 0;
}
