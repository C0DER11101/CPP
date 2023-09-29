#include<iostream>

using namespace std;

class A{
	int a;

	class B{
		int b;

		public:
		void show(){
			puts("Class B");
		}
	};

	public:
	void show(){
		puts("Class A");
	}
};

int main(void){
	A::B b;             // class B is private so, we cannot access it from a non-member function such as main() and creating an object of class B is impossible in a non-member function

	return 0;
}
