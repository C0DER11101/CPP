# Basic type conversion

**Usually, an assignment operator causes the automatic type conversion. _The type of data to the right of an assignment_**
**_operator is automatically converted to the type of the variable on the left_**.

Example:
```c++
int m;
float x=3.14159;

m=x;
```

here `x` is first converted to an integer before it's assigned to `m`. The fractional part of `x` is truncated.

_The type conversions are automatic as long as the data types involved are_ <ins>_built-in types_</ins>.

Consider the following statement that adds two objects and then assigns the result to a third object:

```c++
v3=v1+v2;
```

`v1`, `v2` and `v3` are objects of the same class.

<ins>_When the objects are of the same class type, the operations of addition and assignment are carried out smoothly._</ins>

<ins>**NOTE**</ins>
_When we assign an object of a class to another object of the same class then the values of the data members of the object_
_in the right hand side of the assginment operator are copied to the data members of the object in the left hand side of the_
_assignment operator._

**Three types of situations might arise in the data conversion between uncompatible types:**

1. [<ins>Conversion from basic type to class type</ins>](https://github.com/C0DER11101/CPP/blob/quickCPP/Conversions/basicToClassType.md)
2. [<ins>Conversion from class type to basic type</ins>]().
3. [<ins>Conversion from one class type to another class type</ins>]().

<p align="center">
&#9678; &#9678; &#9678;
</p>
