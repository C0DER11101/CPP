#include<iostream>

using namespace std;

template<typename T>
T add(T a, T b){
	return (a+b);
}

template<typename T>
void Swap(T& a, T& b){
	T temp;

	temp=a;
	a=b;
	b=temp;
}

int main(void){
	int a=add(10, 20);
	cout<<"a = "<<a<<"\n";

	float b=add(20.0f, 45.0f);
	cout<<"b = "<<b<<"\n";

	int c=30, d=40;
	cout<<"Before Swap(): c = "<<c<<" d = "<<d<<"\n";
	Swap(c, d);
	cout<<"After Swap(): c = "<<c<<" d = "<<d<<"\n";

	return 0;
}
