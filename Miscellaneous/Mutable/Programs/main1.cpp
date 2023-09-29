#include<iostream>

using namespace std;

class A{
	int m, n;

	public:
	explicit A(int m, int n){
		this->m=m;
		this->n=n;
		puts("Constructor called");
	}

	void modify(int nm, int nn) const{
		m=nm;
		n=nn;
	}

	void show(){
		printf("m = %d\nn = %d\n", m, n);
	}

	void Show() const{
		printf("m = %d\nn = %d\n", m, n);
	}
};

int main(void){
	A a1(100, 200);
	a1.show();

	const A a2(1000, 2000);
	a2.Show();
	a2.modify(101, 404);        // ERROR! Cannot change values of a const class object
	a2.Show();
	return 0;
}
