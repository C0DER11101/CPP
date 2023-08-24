# <ins>Constructors and destructors</ins>

## <ins>Constructors</ins>
* ${\color{VioletRed}\underline{Task}\: \textbf{Initialize\ objects\ of\ the\ class.}}$
* ${\color{VioletRed}Has\ same\ name\ as\ the\ class.}$
* ${\color{VioletRed}Invoked\ whenever\ an\ object\ of\ its\ associated\ class\ is\ created.}$

**A constructor that doesn't accept any parameters is called <ins>default constructor</ins>.**

A default constructor for any class is:

```
className::className()
```

## <ins>Characteristics</ins>
* ${\color{NavyBlue}Declared\ in\ the\ public\ section\ of\ the\ class.}$
* ${\color{NavyBlue}Don't\ have\ return\ types.}$
* ${\color{NavyBlue}Can't\ be\ inherited.}$
* ${\color{NavyBlue}\textbf{Support\ default\ arguments.}}$
* ${\color{NavyBlue}\textbf{Can't\ be\ virtual.}}$
* ${\color{NavyBlue}Object\ with\ constructor\ or\ destructor\ can\ be\ used\ as\ a\ member\ of\ a\ union.}$

### <ins>Parameterized constructors</ins>
**These constructors take arguments.**

* There are two types of constructor calls:
1. <ins>Explicit call</ins>:
```c++
className classObject=className(actual arguments);
```
[Sample program](https://github.com/C0DER11101/CPP/blob/quickCPP/ConstructorsDestructors/Programs/parameterizedCons.cpp).

2. <ins>Implicit call</ins>:
```c++
className classObject(actual arguments);
```
[Sample program](https://github.com/C0DER11101/CPP/blob/quickCPP/ConstructorsDestructors/Programs/parameterizedCons2.cpp).


<details>
<summary>NOTE</summary>

**Constructors defined inside a class are inline constructors.**

**Parameters of a constructor can be of any type except that of the class to which it belongs.**

**However it may take a reference to its own class(then it's a copy constructor).**

</details>

## <ins>Copy constructor</ins>
* This constructor accepts a <ins><strong>reference</strong></ins> to its own class as a parameter.

**It's used to <ins>declare</ins> an object from another object.**

${\color{Yellow}General\ form:}$

```c++
className(className&classObject){
	// body of the constructor
}
```

$$OR$$

```c++
className::className(className&classObject){
	// body of the constructor
}
```

[Sample program](https://github.com/C0DER11101/CPP/blob/quickCPP/ConstructorsDestructors/Programs/copyConst.cpp).

<details>
<summary><strong><em>NOTE</em></strong></summary>
<strong>If you have defined a copy constructor in your program then an object assignment such as</strong>:
className classObject2=classObject1;

will also invoke the copy constructor.

Otherwise <strong>if there is no copy constructor in your program, then the compiler supplies its own copy constructor</strong>.

</details>

## <ins>Dynamic constructors</ins>
[This](https://github.com/C0DER11101/CPP/blob/quickCPP/ConstructorsDestructors/Programs/dynamicConst.cpp) program should be enough.

## <ins>const objects</ins>
* Values of such objects <ins>cannot</ins> be changed/modified.

${\textbf{const\ objects\ can\ only\ call\ const\ member\ functions.}}$

${\color{Yello}General\ syntax\:}$

```c++
const className classObject;
```

[Sample program](https://github.com/C0DER11101/CPP/blob/quickCPP/ConstructorsDestructors/Programs/constObjects.cpp).


## <ins>Destructors</ins>
* Used to destroy the objects which were created by the constructor.

${color{Yellow}General\ syntax\:}$

```c++
~className(){
	// body of the destructor
}
```

## <ins>Characteristics</ins>
* ${\color{NavyBlue}\textbf{Never}\ \underline{takes}\ arguments.}$
* ${\color{NavyBlue}\textbf{Never}\ \underline{returns}\ values.}$
* ${\color{NavyBlue}Invoked \textbf{implicitly}\ upon\ exiting\ from\ the\ \textbf{program},\ \textbf{block},\ or\ textbf{function}\ to\ clean\ up\ storage\ that\ is\ no\ longer\ accessible.}$

<details>
<summary><em>Note</em></summary>

&#9658;<strong>As the program control leaves the <em>current block</em>, the objects in the block start getting destroyed one by
one as the destructor is called for each object in that block.</strong>

&#9658; <strong>Objects are destroyed in the <em>reverse order</em> of their creation.</strong>

</details>

[Sample program](https://github.com/C0DER11101/CPP/blob/quickCPP/ConstructorsDestructors/Programs/destObjects.cpp).

<p align="center">
&#9678; &#9678; &#9678;
</p>
