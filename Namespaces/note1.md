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
	Test::display(10);
	printf("m = %d\n", Test::m);
	return 0;
}
```
<p align="center">
&#9678; &#9678; &#9678;
</p>
