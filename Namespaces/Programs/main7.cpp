#include<iostream>

using namespace std;

namespace{
	int m=100;

	void display(){
		puts("In the un-named namespace!");
	}
}

int main(void){
	int m=120;

	printf("This is main's m = %d\n", m);            // local variables are given higher priority than the un-named namespace's variables!

	display();                    // no :: operator because the namespace has no name

	return 0;
}
