# Class to basic type

**This operation is not supported by constructors.**

_To perform this operation, we overload the_ <ins>_casting operator_</ins>.

<ins>General syntax:</ins>
```c++
operator typeName()
```

`typeName` can be any built-in type such as `int`, `float`, `double`, etc., or any user-defined type such as another class type or struct type.

**The casting operator function converts the class object of which it's a member to** `typeName`.


Now, consider the following conversion function:

```c++
vector::operator double()
{
	double sum=0;
	for(int i=0; i<size; i++)
		sum=sum+v[i]*v[i];
	return sqrt(sum);
}
```
This function converts a vector to the corresponding scalar magnitude.

<ins>RECALL:</ins> _Magnitude of a vector is given by the square root of the sum of the squares of its components._

The operator `double()` can be used as:
```c++
double length=double(V1); // explicitly calling the conversion function
```
<p align="center">
**OR**
</p>

```c++
double length=V1; // implicitly calling the conversion function
```
where `V1` is a vector object.

* When the compiler encounters a statement that requires the conversion of a class type to basic type, <ins>it quietly calls</ins>
<ins> the casting operator function to do the job</ins>.

The casting operator function must satisfy the following functions:

* It must be a class member(hence it requires no arguments because it is invoked by the object of that class).
* It must not specify a return type.
* It must not have any arguments.

<p align="center">
</p>
