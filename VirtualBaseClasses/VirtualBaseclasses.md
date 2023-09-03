# Virtual base classes

* [The program here](https://github.com/C0DER11101/CPP/blob/quickCPP/VirtualBaseClasses/Programs/p1.cpp) highlights why we need virtual base classes.

* In the above program, the `child` derives public and protected members of `parent1` and `parent2`.
* `child` also derives the public and protected members of `grandParent`, but **twice**. **Once** from `parent1` and **again** from `parent2`.

The program below represents the solution to the problem above:

* [Resolution](https://github.com/C0DER11101/CPP/blob/quickCPP/VirtualBaseClasses/Programs/s1.cpp).

The order of writing `virtual` and `public` or `private` or `protected` doesn't matter i.e. you can write them in any order.


* Using **virtual** ensures that only one copy of the class(in our example `grandParent`) is inherited regardless of how many inheritance paths exist between the virtual base class and a derived class.

So, in the resolution program above, `child` inherits public and protected members from `parent1` and `parent2`. `child` also inherits the public and protected members of `grandParent` but only **once**.

<p align="center">
&#9678; &#9678; &#9678;
</p>
