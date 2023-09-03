// Another way of initializing class objects through constructors

#include<iostream>

using namespace std;

class Class{
	float a, b;

	public:

	Class(float x, float y):a(x), b(y){
		cout<<"a = "<<a<<" and b = "<<b<<"\n";
	}
};

int main(void){
	Class cls(120, 140);
	return 0;
}
