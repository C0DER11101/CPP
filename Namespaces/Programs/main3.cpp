#include<iostream>

using namespace std;

namespace Test{
	int m=100;

	void display(int n){
		printf("n = %d\n", n);
	}
}

int main(void){
	using Test::display;                 // the using declaration
	display(1000);
	return 0;
}
