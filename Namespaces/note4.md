# Defining functions of a namespace outside it

${\color{Yellow}General\ form\:}$
```c++
returnType namespaceName::functionName(argList){
	// function body
}
```
* This is just like defining functions of a class outside it.

The code below shows a namespace whose function is defined outside it:
```c++
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
```

<p align="center">
&#9678; &#9678; &#9678;
</p>
