# Overloading the pointer to member operator `->`

<details>
<summary>IMPORTANT</summary>
The `operator->()` must return a <strong>pointer to the class</strong> in which it's defined.
</details>

* [Program-1](https://github.com/C0DER11101/CPP/blob/quickCPP/OperatorOverloading/Programs/main10.cpp).

When you call the `operator->()` function via an object like shown in the above program, it basically gets interpreted as:

```c++
(classObject.operator->())->classPublicMemberOrMemberFunction;
```

<p align="center">
&#9678; &#9678; &#9678;
</p>
