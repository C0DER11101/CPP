#include<iostream>

using namespace std;

class A{
	int m;

	public:
	explicit A(int val){
		m=val;
		puts("Constructor called!");
	}

	void show(){
		printf("m = %d\n", m);
	}
};

int main(void){
	A a(100);
	A b=100;               // ERROR!

	a.show();
	b.show();

	return 0;
}
