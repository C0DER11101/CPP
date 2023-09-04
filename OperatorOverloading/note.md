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

<p align="center">
&#9678; &#9678; &#9678;
</p>
