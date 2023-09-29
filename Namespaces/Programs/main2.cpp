#include<iostream>

using namespace std;

namespace Test{
	int m=100;
	void display(int n){
		printf("value = %d\n", n);
	}
}

int main(void){

	using namespace Test;

	printf("m = %d\n", m);
	display(1000);

	return 0;
}
