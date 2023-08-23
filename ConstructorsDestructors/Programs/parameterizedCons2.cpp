#include<iostream>

using namespace std;

class sample{
	int m, n;

	public:
	sample(int x, int y);
	void show();
};

sample::sample(int x, int y){
	m=x, n=y;
}

void sample::show(){
	cout<<"m = "<<m<<"\n";
	cout<<"n = "<<n<<"\n";
}

int main(void){
	sample smp(100, 200); // implicit constructor call

	smp.show();

	return 0;
}
