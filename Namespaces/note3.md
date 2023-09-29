# Un-named namespaces
* Occupy global scope and are accessible in all scopes following the declaration in the file.
* Members can be accessed without any qualification(i.e. without the use of `::`).

${\color{Yellow}General\ Syntax\:}$
```c++
namespace{
	// variables and functions
}
```

The code below shows us an un-named namespace:
```c++
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
```

* Here's another code showing un-named namespaces:
```c++
#include<iostream>

// an un-named namespace is local to a file

using namespace std;

namespace{             // un-named namespaces are dis-continguous inside a file
	int m=100;

	void display();     // function declaration
}

namespace{              // this namespace is related to the above namespace(you can say that it's kind of the same namespace)
	void display(){              // display() defined in this namespace
		puts("This is the definition of display()");
	}
}

int main(void){
	display();
	return 0;
}
```

* Here, you can see that `display()` is declared in one un-named namespace and then defined in another un-named namespace. But actually both the namespaces are related. It can also be said that they are sort of same.

* Here's a pretty [useful video](https://www.google.com/search?q=how+to+use+typedef+with+unnamed+namespaces+in+C%2B%2B%3F&client=firefox-b-lm&sca_esv=569424800&sxsrf=AM9HkKleKiJJH0iYdYzUMu-utRzFNv9C2g%3A1695984619437&ei=66sWZZuRGs6YseMPqOOwqAI&ved=0ahUKEwjbsqSG08-BAxVOTGwGHagxDCUQ4dUDCA8&uact=5&oq=how+to+use+typedef+with+unnamed+namespaces+in+C%2B%2B%3F&gs_lp=Egxnd3Mtd2l6LXNlcnAiMmhvdyB0byB1c2UgdHlwZWRlZiB3aXRoIHVubmFtZWQgbmFtZXNwYWNlcyBpbiBDKys_MgcQIRigARgKMgcQIRigARgKMgcQIRigARgKSMlaUOQSWLJXcAF4ApABA5gBvgSgAeFnqgEKMi00NC4zLjEuMbgBA8gBAPgBAcICBBAAGEfCAgQQIxgnwgIHEAAYigUYQ8ICCBAAGIoFGJECwgILEAAYgAQYsQMYgwHCAgsQLhiKBRixAxiDAcICBRAuGIAEwgIFEAAYgATCAggQABiKBRiGA8ICBRAhGKABwgIEECEYFeIDBRIBMSAp4gMEGAAgQYgGAZAGCA&sclient=gws-wiz-serp#fpstate=ive&vld=cid:03553a74,vid:HrFtpSH-Eso,st:0).

<p align="center">
&#9678; &#9678; &#9678;
</p>
