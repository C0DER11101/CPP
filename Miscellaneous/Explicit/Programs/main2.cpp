#include<iostream>

using namespace std;

class A{
	int a;
	public:
	explicit A(int val): a(val){
		puts("Constructor called!");
	}

	void show(){
		printf("value a = %d\n", a);
	}
};

int main(void){
	A a1(100);
	A a2=A(100*2);

	a1.show();
	a2.show();

	return 0;
}
