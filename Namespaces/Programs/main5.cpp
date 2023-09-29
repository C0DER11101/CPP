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
	using namespace outer;
	printf("outer m = %d\n", m);
	printf("inner m = %d\n", inner::m);

	display();
	inner::display();

	return 0;
}
