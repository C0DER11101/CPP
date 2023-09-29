#include<iostream>

using namespace std;

class sample{
	int m, n;

	public:
	sample(int x, int y);
	sample(int x);
	void show();
};

sample::sample(int x, int y){
	puts("Constructor called!");
	m=x, n=y;
}

sample::sample(int x){
	puts("Single parameterized constructor called!");
	m=x;
	n=0;
}

void sample::show(){
	cout<<"m = "<<m<<"\n";
	cout<<"n = "<<n<<"\n";
}

int main(void){
	sample smp={100, 200}; // implicit constructor call

	sample smp2=12000;      // another implicit call

	smp.show();

	smp2.show();

	return 0;
}
