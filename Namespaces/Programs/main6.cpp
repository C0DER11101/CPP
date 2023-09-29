#include<iostream>

using namespace std;

namespace outer{
	int m=100;
	namespace inner{
		int m=1000;
		void display(){
			puts("display() of inner");
		}
	}

	void display(){
		puts("display() of outer");
	}
}

int main(void){
	using namespace outer::inner;              // :: is not required only with inner, but it's required with outer
	printf("outer m = %d\n", outer::m);
	printf("inner m = %d\n", m);

	return 0;
}
