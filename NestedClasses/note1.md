# Some points on nested classes
* When a class is defined inside a class then we call it nesting of classes.

${\color{yellow}This\ is\ how\ you\ create\ an\ object\ of\ a\ nested\ class\:}$
```c++
outerClass::nestedClass objectOfNestedClass;
```

Look at the code below:
```c++
#include<iostream>

using namespace std;

class A{
	int a;

	class B{
		int b;

		public:
		void show(){
			puts("Class B");
		}
	};

	public:
	void show(){
		puts("Class A");
	}
};

int main(void){
	A::B b;             // class B is private so, we cannot access it from a non-member function such as main() and creating an object of class B is impossible in a non-member function

	return 0;
}
```
* The inner class `B` is private in class `A`, so we cannot create any object of class `B` in any non-member function.
* But we can create objects of class `B` inside member functions of class `A` and class `B`.

Now, what if we define class `B` in public section? Look at the following code:
```c++
#include<iostream>

using namespace std;

class A{
	int a;

	public:
	class B{
		int a;

		public:
		B(){
			a=200;
			puts("Constructor of class B");
		}

		void show(){
			printf("B's a = %d\n", a);
			puts("show() of class B");
		}
	};

	A(){
		a=300;
		puts("Constructor of class A");
	}

	void show(){
		printf("A's a = %d\n", a);
		puts("show() of class A");
	}
};

int main(void){
	A a;
	A::B b;
	a.show();
	b.show();
	return 0;
}
```
* The above code works without any errors.

But if class `B` is defined in protected section of class `A` then also we won't be able to create any objects of class `B` in non-member functions.

The following code throws the error that `B` is declared protected:
```c++
#include<iostream>

using namespace std;

class A{
	int a;

	protected:
	class B{
		int a;

		public:
		B(){
			a=200;
		}

		void show();
	};

	public:

	A(){
		a=100;
	}

	void show();
};

void A::show(){
	printf("A's a = %d\n", a);
	puts("show() of class A");
}

void A::B::show(){
	printf("B's a = %d\n", a);
	puts("show() of class B");
}

int main(void){
	A a;
	a.show();

	A::B b;            // ERROR! Class B is protected

	return 0;
}
```

<p align="center">
&#9678; &#9678; &#9678;
</p>
