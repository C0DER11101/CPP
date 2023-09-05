// Simplest example for compile time polymorphism:

#include<iostream>

using namespace std;

int add(int a, int b){
	cout<<"add(int, int)\n";

	return (a+b);
}

float add(float a, float b){
	cout<<"add(float, float)\n";

	return (a+b);
}

int main(void){
	int a=10, b=20;

	int result=add(a, b);
	cout<<"RESULT = "<<result<<"\n";

	float c=10, d=20;

	float res=add(c, d);
	cout<<"RESULT = "<<res<<"\n";

	return 0;
}
