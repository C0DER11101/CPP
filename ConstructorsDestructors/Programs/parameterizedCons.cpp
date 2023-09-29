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
	sample smp=sample(100, 200); // explicit constructor call
	sample smp2(200, 500);       // also an explicit constructor call

	smp.show();
	smp2.show();

	return 0;
}
