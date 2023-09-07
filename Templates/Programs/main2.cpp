#include<iostream>

using namespace std;

template<typename T1,typename T2, typename T3>
class Super{
	T1 a;
	T2 b;
	T3 c;

	public:

	Super(T1 value1, T2 value2, T3 value3): a(value1), b(value2), c(value3){
		cout<<"Objects created!\n";
	}

	void show(){
		cout<<"a = "<<a<<" b = "<<b<<" c = "<<c<<"\n";
	}
};

int main(void){
	Super<int, char, float>super(100, 'a', 12.5f);

	super.show();

	return 0;
}
