# Nesting namespaces

Look at the code below:
```c++
#include<iostream>

using namespace std;

namespace outer{
	int m=100;
	namespace inner{
		int m=105;
	}
}

int main(void){
	// notice: no naming conflicts!

	printf("inner m = %d\n", outer::inner::m);            // inner is a member of outer and m is a member of inner
	printf("outer m = %d\n", outer::m);                   // m is a member of outer
	return 0;
}
```

* Here is some more:

```c++
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
```
* The `using` directive is used only with `outer`, so to access members of `inner` we have to use the `::` operator with `inner`.

The code below uses `using` with the namespace `inner`:
```c++
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
	using namespace outer::inner;              // :: is not required only with inner, but it's required with outer
	printf("outer m = %d\n", outer::m);
	printf("inner m = %d\n", m);

	return 0;
}
```

<p align="center">
&#9678; &#9678; &#9678;
</p>
