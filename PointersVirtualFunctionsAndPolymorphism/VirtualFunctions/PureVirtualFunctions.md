# Pure virtual functions
* Also called **do-nothing** functions.

_Syntax:_
```java
virtual returnType functionName()=0;
```

Example:

```java
virtual void display()=0;
```

* Declared in a **base class**.
* Have no definition relative to base class.
* The compiler requires the derived classes to **either define the function or redeclare it as a pure virtual function**.
* [**IMPORTANT**]A class containing **pure virtual functions** cannot be used to declare any objects of its own. Such classes are called **abstract classes**.
* <ins>Objective of an abstract class:<ins> <em>To provide some traits to the derived classes and to create a base pointer required for achieving run time polymorphism</em>.
* [This program](https://github.com/C0DER11101/CPP/blob/quickCPP/PointersVirtualFunctionsAndPolymorphism/VirtualFunctions/Programs/main3.cpp) shows the usage of pure virtual functions.

<p align="center">
&#9678; &#9678; &#9678;
</p>
