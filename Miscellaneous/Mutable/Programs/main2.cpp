#include<iostream>

using namespace std;

class A{
	mutable int m, n;

	public:
	explicit A(int m, int n){
		this->m=m;
		this->n=n;
		puts("Constructor called");
	}

	void show(){
		printf("m = %d\nn = %d\n", m, n);
	}

	void modify(int nm, int nn) const{
		m=nm;
		n=nn;
	}

	void Show() const{
		printf("m = %d\nn = %d\n", m, n);
	}
};

int main(void){
	A a1(100, 120);

	a1.show();
	a1.modify(140, 160);
	a1.show();

	const A a2(180, 200);
	a2.Show();
	a2.modify(220, 240);       // here, modification is allowed since the instance variables are declared as "mutable"
	a2.Show();

	return 0;
}
