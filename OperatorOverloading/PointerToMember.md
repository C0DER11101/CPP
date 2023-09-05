# Overloading the pointer to member operator `->`

<details>
<summary>IMPORTANT</summary>
The <code>operator->()</code> must return a <strong>pointer to the class</strong> in which it's defined.

* [Useful Link](https://www.tutorialspoint.com/cplusplus/class_member_access_operator_overloading.htm).
</details>

* [Program-1](https://github.com/C0DER11101/CPP/blob/quickCPP/OperatorOverloading/Programs/main10.cpp).

When you call the `operator->()` function via an object like shown in the above program, it basically gets interpreted as:

```c++
(classObject.operator->())->classPublicMemberOrMemberFunction;
```

* [Program-2](https://github.com/C0DER11101/CPP/blob/quickCPP/OperatorOverloading/Programs/main11.cpp).

This is an errornous program.

<p align="center">
&#9678; &#9678; &#9678;
</p>
