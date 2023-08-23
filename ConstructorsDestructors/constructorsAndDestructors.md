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
2. <ins>Implicit call</ins>:
```c++
className classObject(actual arguments);
```

<p align="center">
&#9678; &#9678; &#9678;
</p>
