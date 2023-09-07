# Virtual constructors and destructors
* Virtual constructors: **IMPOSSIBLE**.

## <ins>Virtual Destructors</ins>
<ins><strong>When to use</strong></ins>

<em>When we want to make sure that the different destructors in an inheritance hierarchy are called in order, particularly when the base class pointer is referring to a derived type object.</em>

* The program [here](https://github.com/C0DER11101/CPP/blob/quickCPP/PointersVirtualFunctionsAndPolymorphism/VirtualConstructorsAndDestructors/Programs/main1.cpp) shows that when we have normal destructors, and the pointer to the base class points to a derived class object(allocated via `new` or `malloc` or `calloc`) then when we use `delete` on that pointer then the destructor of the base class will be called by-default. But the expection was that the destructor of the derived class will be called. Now, this is kind of again **compile-time polymorphism** because which function to execute is decided during compile time by looking at the **type** of the pointer or object(**pointer** in our case) and here the **type** of the pointer is that of the base class type and so the destructor of the base class is called.
* [This program](https://github.com/C0DER11101/CPP/blob/quickCPP/PointersVirtualFunctionsAndPolymorphism/VirtualConstructorsAndDestructors/Programs/main2.cpp) is the solution to the above problem, we just define the destructor of `Super` as `virtual`.

* Not defining the base class destructor as `virtual` will lead to the calling of the base class destructor for each deletion of derived class objects(allocated via `new` or `malloc` or `calloc`) which **may** lead to **memory leak**.
* **N**ote **t**hat **w**ith **j**ust **c**lass **o**bjects **t**he **c**lass **d**estructors **a**re **c**alled **n**ormally. **P**roblem **a**rises **w**hen **y**ou **s**tart **u**sing **p**ointers **t**o **b**ase **c**lasses(**b**ecause **p**ointers **t**o **d**erived **c**lasses **c**annot **p**oint **t**o **b**ase **c**lass **o**bjects).

<p align="center">
&#9678; &#9678; &#9678;
</p>
