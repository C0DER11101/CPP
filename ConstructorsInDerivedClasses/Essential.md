# Very important

* [Program-1](https://github.com/C0DER11101/CPP/blob/quickCPP/ConstructorsInDerivedClasses/Programs/constrDerived.cpp) $\rightarrow$ This program shows us that if the super class doesn't have any constructors then the subclasses may/maynot have constructors. If the subclasses have constructors then there is not problem and if they don't have any constructors then also there is not problem.

* [Program-2](https://github.com/C0DER11101/CPP/blob/quickCPP/ConstructorsInDerivedClasses/Programs/constrDerived2.cpp) $\rightarrow$ To understand this program please refer to this [table](https://github.com/C0DER11101/CPP/blob/quickCPP/ConstructorsInDerivedClasses/Note1.md#table-showing-how-execution-of-base-class-constructors-takes-place).

* [Program-3](https://github.com/C0DER11101/CPP/blob/quickCPP/ConstructorsInDerivedClasses/Programs/constrDerived3.cpp) $\rightarrow$ If the base class has a parameterized constructor then the subclass too **must** have a parameterized constructor and this subclass constructor **must call** the base class constructor with the required arguments before performing any operation.

* [Program-4](https://github.com/C0DER11101/CPP/blob/quickCPP/ConstructorsInDerivedClasses/Programs/constrDerived6.cpp) $\rightarrow$ Here `Sub` inherited from `Super1` and `Super2` in the order : `Super2` then `Super1`. And notice that the base constructors `Super1()` and `Super2()` are called as: `Super1(arg1), Super2(arg2)` but the constructors will get executed in the order in which `Sub` inherited from `Super1` and `Super2` i.e first the constructor of `Super2` will be executed and then the constructor of `Super1` will be executed. So **the order in which the base constructors are called doesn't matter, because the base constructors are executed in the order they were inherited by the subclass.**

* [Program-5](https://github.com/C0DER11101/CPP/blob/quickCPP/ConstructorsInDerivedClasses/Programs/constrDerived7.cpp) $\rightarrow$ The explanation for this program is also the same as the above one plus also do visit the above mentioned table to understand it even better.


<p align="center">
&#9678; &#9678; &#9678;
</p>
