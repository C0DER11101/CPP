# Embedded classes in C++

* [Program-1](https://github.com/C0DER11101/CPP/blob/quickCPP/EmbeddedClasses/Programs/p1.cpp) $\rightarrow$ The constructor calls are executed in the order in which the embedded class objects are declared inside the class. So, in this program first `s1` was declared and then `s2` was declared. So accordingly first the constructor of `subSuper1` will be called and then the constructor of `subSuper2` will be called.

Notice in the program above:
```c++
Super(){
	cout<<"Hello from Super!\n";
}
```
it seems like the constructor of `Super` will be first called when we create an object of class `Super` but that's not the case, actually the constructor definition of `Super` looks much like this:
```c++
Super():
s1(), s2(){
	cout<<"Hello from Super!\n";
}
```
Why didn't I write it like this then, because none of the constructors take any argument that's why it's not mandatory to provide the constructor calls explicitly.

* [Program-2](https://github.com/C0DER11101/CPP/blob/quickCPP/EmbeddedClasses/Programs/p2.cpp) $\rightarrow$ Again, the order of calling the embedded class constructors doesn't matter, the order of execution is going to remain same.

<p align="center">
&#9678; &#9678; &#9678;
</p>
