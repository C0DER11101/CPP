# Virtual functions
* When you are use the same function in both the base and the derived class, you make the function in the base class **virtual**.
* When a function is made **virtual**, C++ determines which function to use at **run time** based on **the type of object pointed to by the base pointer, rather than the type of the pointer**.
* [This program](https://github.com/C0DER11101/CPP/blob/quickCPP/PointersVirtualFunctionsAndPolymorphism/VirtualFunctions/Programs/main1.cpp) shows the working of `virtual` functions.
* Virtual functions **must** be accessed through the use of a **pointer** declared as **pointer to the base class**, only then **run-time polymorphism** can be achieved.
* [This program](https://github.com/C0DER11101/CPP/blob/quickCPP/PointersVirtualFunctionsAndPolymorphism/VirtualFunctions/Programs/main2.cpp) highlights an important observation: **a pointer to the derived class cannot point to an object of the super class**.

## <ins>Rules of virtual functions</ins>
* Must be members of some class.
* **Cannot** be **static** members.
* Accessed by using **object pointers**.
* **Can** be friend of another class.
* **Must** be **defined** in the **base class**, even if not used.
* If defined in the base class, then it **need not** necessarily be **redefined** in the **derived class**.

<p align="center">
&#9678; &#9678; &#9678;
</p>
