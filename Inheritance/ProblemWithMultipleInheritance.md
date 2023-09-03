# Problem with multiple inheritance

<strong><ins>Problem</ins></strong>: <em>A function with same name appears in more than one base class.</em>

* [Problem: when the subclass doesn't have a function](https://github.com/C0DER11101/CPP/blob/quickCPP/Inheritance/Programs/Ambiguity.cpp).
* [Problem: when the subclass has a function](https://github.com/C0DER11101/CPP/blob/quickCPP/Inheritance/Programs/Ambiguity2.cpp).

**Resolutions**

* [Resolution-1](https://github.com/C0DER11101/CPP/blob/quickCPP/Inheritance/Programs/AmbiguityRes.cpp).

The scope-resolution `::` operator used inside `display()` of class `Sub` after `Super2` means that the `display()` method that is called
within the `display()` of `Sub` belongs to the class `Super2` i.e `Super2::display()`.

* [Resolution-2](https://github.com/C0DER11101/CPP/blob/quickCPP/Inheritance/Programs/AmbiguityRes2.cpp).

`Super1::display();` means the `display()` method of class `Super1` will be called. `Super2::display();` means the same thing.

<p align="center">
&#9678; &#9678; &#9678;
</p>
