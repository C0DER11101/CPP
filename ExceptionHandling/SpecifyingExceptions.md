# Specifying exceptions
${\color{Yellow}General\ form\:}$
```c++
returnType functionName(argList) throw(typeList){
	// code
}
```

`typeList` is a comma-separated list of types. In this list you cannot specify **incomplete type**, **abstract class type**, **rvalue reference type** or a **pointer or reference to an incomplete type** other than the following types:
1. `void*`.
2. `const void*`.
3. `volatile void*`.
4. `const volatile void*`.

* **A function with no exception specifications allows all exceptions.**
* **A function with an exception specification that is empty i.e.** `throw()` **doesn't allow any exceptions to be thrown.**
* **An exception specification is not part of a function's type.**
* **An exception may only appear at the end of the top-level function declarator in declaration or definition of a function, pointer to function, reference to function, or pointer to member function.**
* **An exception specification cannot appear in a** `typedef` **declaration.**

Example:

```c++
void f() throw(int);
void (*g)() throw(int);
void h(void i() throw(int));
// typedef int (*j)() throw(int); // THIS IS AN ERROR!!
```

<p align="center">
&#9678; &#9678; &#9678;
</p>
