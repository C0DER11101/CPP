# Operator overloading

**Cannot** overload the following operators:

1. `.`, `.*`.
2. `::`.
3. `sizeof`.
4. `?:`.

**When an operator is overloaded then it's original meaning is not lost.**

**operator** is a keyword in C++.

${\color{Yellow}General\ form\ of\ operator\ function\:}$
```c++
returnType className::operator operatorSymbol(argList){
	//function body
}
```

* [Program-1](https://github.com/C0DER11101/CPP/blob/quickCPP/OperatorOverloading/Programs/main1.cpp) $\rightarrow$ This programs shows the overloading of unary operators. Here `-overLoad;` is same as writing as `overLoad.operator-();`
* [Program-2](https://github.com/C0DER11101/CPP/blob/quickCPP/OperatorOverloading/Programs/main2.cpp) $\rightarrow$ This program shows the overloading of the `++` operator. This operator is by default the prefix-increment operator. If you write the `++` after the object name then the compiler will throw an error.
* [Program-3](https://github.com/C0DER11101/CPP/blob/quickCPP/OperatorOverloading/Programs/main3.cpp) $\rightarrow$ This program shows the overloading of a unary operator using **friend** function.
* [Program-4](https://github.com/C0DER11101/CPP/blob/quickCPP/OperatorOverloading/Programs/main4.cpp) $\rightarrow$ This program shows that we cannot have the same function as a **friend** and also as a member function of a class. This program throws an error related to ambiguous function call.
* [Program-5](https://github.com/C0DER11101/CPP/blob/quickCPP/OperatorOverloading/Programs/main5.cpp) $\rightarrow$ Here, we have defined `operator++(int)` because it's required define `operator++()` with an argument if we want to use it as a postfix-increment operator. The argument value is `0` though.
* [Program-6](https://github.com/C0DER11101/CPP/blob/quickCPP/OperatorOverloading/Programs/main6.cpp) $\rightarrow$ This program shows the overloading of binary operators.
* [Program-7](https://github.com/C0DER11101/CPP/blob/quickCPP/OperatorOverloading/Programs/main7.cpp) $\rightarrow$ This program uses friend functions to demonstrate overloading of binary operators.
* [Program-8](https://github.com/C0DER11101/CPP/blob/quickCPP/OperatorOverloading/Programs/main8.cpp) $\rightarrow$ Overloading unary operators that are **friends** of the class.

<ins><strong>Understanding the overloading of binary operators</strong></ins>

<em>In overloading of binary operators, the left-hand operand is used to invoke the operator function and the right-hand operand is passed as an <strong>argument</strong></em>.
<em>If the overloaded binary operator is a friend of the class then the call to it of the form:</em>
<code>obj1 op obj2;</code><em> is equivalent to writing</em> <code>op(first, second);</code> <em>where</em> <code>op</code> <em>is an operator function which is a friend of the class of the objects</em> <code>obj1</code> <em>and</em> <code>obj2</code>.

<p align="center">
&#9678; &#9678; &#9678;
</p>
