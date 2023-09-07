# Pointers to derived classes

* [Problem](https://github.com/C0DER11101/CPP/blob/quickCPP/PointersVirtualFunctionsAndPolymorphism/Polymorphism/Programs/main3.cpp) $\rightarrow$ in this program we used pointers to the base class `Super` and used it to first store the address of an object of class `Super` and then to store the address of an object of class `Sub`.

* <ins>Observation</ins>: When, `super` stores the address of the object `base` and we call `display()` via `super` then the `display()` of `Super` gets called which is fine. But when we store the address of `sub` in `super` and then call `display()` via `super` then too the `display()` of class `Super` is called, which is not fine.
* <ins>Conclusion</ins>: This is <strong>compile time polymorphism</strong> because the function call is decided based upon the type of the pointer being used to call that function and here the type of the pointer is of `Super` i.e. the base class type and so when calling `display()` while storing the address of `sub` in `super`, the compiler will always execute the body of `display()` of `Super` rather than that of `display()` of `Sub`.
* [Solution-1](https://github.com/C0DER11101/CPP/blob/quickCPP/PointersVirtualFunctionsAndPolymorphism/Polymorphism/Programs/main4.cpp) $\rightarrow$ is to use pointers to derived classes.
* [Solution-2](https://github.com/C0DER11101/CPP/blob/quickCPP/PointersVirtualFunctionsAndPolymorphism/Polymorphism/Programs/main5.cpp) $\rightarrow$ is to typecast the pointer to base class to a pointer to derived class.

<p align="center">
&#9678; &#9678; &#9678;
</p>
