#include<iostream>

using namespace std;

namespace sample{
	int m=1000;

	void display();
}

void sample::display(){
	puts("Hello!! This is display()");
}

int main(void){
	sample::display();
	return 0;
}
