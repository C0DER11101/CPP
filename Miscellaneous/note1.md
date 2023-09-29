# The `explicit` keyword
* This keyword declares class constructors to be **explicit** constructors and prevents them from performing **implicit** conversions.

Scan through this code:
```c++
#include<iostream>

using namespace std;

class A{
	int m;

	public:
	explicit A(int val){
		m=val;
		puts("Constructor called!");
	}

	void show(){
		printf("m = %d\n", m);
	}
};

int main(void){
	A a(100);
	A b=100;               // ERROR!

	a.show();
	b.show();

	return 0;
}
```
* Here `A b=100;` is an implicit constructor call, but the constructor of class `A` is defined as `explicit`, that means there can be no implicit conversion, and hence this code results to an **ERROR**.

<p align="center">
&#9678; &#9678; &#9678;
</p>
