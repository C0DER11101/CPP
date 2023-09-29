# The `mutable` keyword
* Used to modify a particular data item of a const class object or a const function.

```c++
#include<iostream>

using namespace std;

class A{
	int m, n;

	public:
	explicit A(int m, int n){
		this->m=m;
		this->n=n;
		puts("Constructor called");
	}

	void modify(int nm, int nn) const{
		m=nm;
		n=nn;
	}

	void show(){
		printf("m = %d\nn = %d\n", m, n);
	}

	void Show() const{
		printf("m = %d\nn = %d\n", m, n);
	}
};

int main(void){
	A a1(100, 200);
	a1.show();

	const A a2(1000, 2000);
	a2.Show();
	a2.modify(101, 404);        // ERROR! Cannot change values of a const class object
	a2.Show();
	return 0;
}
```
* Here, we can see that the instance variables of the const class instance `a2` cannot be modified.

Take a look the code below:
```c++
#include<iostream>

using namespace std;

class A{
	mutable int m, n;

	public:
	explicit A(int m, int n){
		this->m=m;
		this->n=n;
		puts("Constructor called");
	}

	void show(){
		printf("m = %d\nn = %d\n", m, n);
	}

	void modify(int nm, int nn) const{
		m=nm;
		n=nn;
	}

	void Show() const{
		printf("m = %d\nn = %d\n", m, n);
	}
};

int main(void){
	A a1(100, 120);

	a1.show();
	a1.modify(140, 160);
	a1.show();

	const A a2(180, 200);
	a2.Show();
	a2.modify(220, 240);       // here, modification is allowed since the instance variables are declared as "mutable"
	a2.Show();

	return 0;
}
```
* Here, the instance variables `m` and `n` are declared as `mutable` meaning that if we have a const class instance then also these instance variables can be modified irrespective of that instance being a const instance.

* Make a visit to [this link](https://www.google.com/search?client=firefox-b-lm&q=mutable+in+C%2B%2B#fpstate=ive&ip=1&vld=cid:cb73c97a,vid:9RknjN8LK8M,st:0).

<p align="center">
&#9678; &#9678; &#9678;
</p>
