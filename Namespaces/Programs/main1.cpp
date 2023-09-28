#include<iostream>

using namespace std;

namespace Test{
	int m=100;
	void display(int n){
		printf("value = %d\n", n);
	}
}

int main(void){
	Test::display(10);
	printf("m = %d\n", Test::m);
	return 0;
}
