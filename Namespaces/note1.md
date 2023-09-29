# Namespaces
* A namespace works to avoid name conflicts.

For example, the standard libraries define a function named `sort()`, which sorts elements. But you can define your own `sort()` thanks to namespaces because the function that you just defined isn't in the namespace as the standard one.

* Also, check out [this link](https://en.cppreference.com/w/cpp/language/namespace) for more info.

${\color{Yellow}General\ form\:}$
```c++
namespace namespaceName{
	// declaration of variables, functions, classes
}
```

Have a look at the code below:
```c++
#include<iostream>

using namespace std;

namespace Test{
	int m=100;
	void display(int n){
		printf("value = %d\n", n);
	}
}

int main(void){
	Test::display(10);                           // accessing member of a namespace
	printf("m = %d\n", Test::m);                 // accessing member of a namespace
	return 0;
}
```
* So from this program, we can see the members of the namespace `Test` have been accessed via the scope resolution operator `::`.

The following shows another way of accessing namespace members:
```c++
#include<iostream>

using namespace std;

namespace Test{
	int m=100;
	void display(int n){
		printf("value = %d\n", n);
	}
}

int main(void){

	using namespace Test;                     // so that we don't have to use the :: operator

	printf("m = %d\n", m);                    // easy access, just type the name of namespace member
	display(1000);                            // easy access, just type the name of namespace member

	return 0;
}
```

* We can omit writing the `::` operator by using the `using` directive for the namespace `Test`.

## The `using` declaration
* We can also use the `using` declaration with a namespace member so that we don't have to use the `::`operator with that particular member of the namespace, but the rest of the members need to be accessed via the `::` operator.

Look at the code below:
```c++
#include<iostream>

using namespace std;

namespace Test{
	int m=100;

	void display(int n){
		printf("n = %d\n", n);
	}
}

int main(void){
	using Test::display;                 // the using declaration
	display(1000);
	return 0;
}
```
* Here we used the `using` directive only with the `display()` function of namespace `Test`.
* Now, to call `display`, we don't have to use the `::` operator, instead we just call `display()` like a normal function.
* But to access `m`, we have to write `Test::m`.

<p align="center">
&#9678; &#9678; &#9678;
</p>
