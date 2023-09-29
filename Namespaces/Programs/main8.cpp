#include<iostream>

// an un-named namespace is local to a file

using namespace std;

namespace{             // un-named namespaces are dis-continguous inside a file
	int m=100;

	void display();     // function declaration
}

namespace{              // this namespace is related to the above namespace(you can say that it's the same namespace)
	void display(){              // display() defined in this namespace
		puts("This is the definition of display()");
	}
}

int main(void){
	display();
	return 0;
}
