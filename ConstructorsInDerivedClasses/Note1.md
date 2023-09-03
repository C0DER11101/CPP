# Constructors in derived classes

* If base class constructor takes **no arguments** then the derived classes **neednot** have a constructor function.
* If **any base class constructor** takes **atleast one argument** then it is **mandatory** for the **derived classes** to have a constructor and pass the arguments to the base constructor.

* In case of **multiple inheritance**, the base classes are constructed in the **order in which they appear in the _declaration_ of the derived class.**
* Initial values required by all the classes are supplied when a derived class object is declared.
* The constructor of the derived class receives the entire list of values as its arguments and passes them onto the base constructor in the order in which they are declared in the derived class.

${\color{Yellow}General\ form\:}$
```c++
derivedConstructor(argList1, argList2, ....., argListN)
Base1(argList1),
Base2(argList2),
.
.
.
BaseN(argListN)
{
	// body of the derived constructor
}
```

* Constructors for **virtual base classes** are **invoked before any _non-virtual_ base class.**


## <ins>Table showing how execution of base class constructors takes place</ins>

<table>
<tr>
<td><strong>Method of inheritance</strong></td>
<td><strong>Order of execution</strong></td>
</tr>

<tr>
<td rowspan="2"><code>class B:public A{};</code></td>
</tr>

<tr>
<td><code>A();</code>$\rightarrow$ The base constructor</td>
<td><code>B();</code>$\rightarrow$ The derived constructor</td>
</tr>

<tr>
<td rowspan="3"><code>class A:public B, public C{};</code></td>
</tr>

<tr>
<td><code>B();</code>$rightarrow$ The base constructor(first)</td>
<td><code>C();</code>$rightarrow$ The base constructor(second)</td>
<td><code>A();</code>$rightarrow$ The derived constructor</td>
</tr>

<tr>
<td rowspan="3"><code>class A:public C, public B{};</code></td>
</tr>

<tr>
<td><code>C();</code>$rightarrow$ The base constructor(first)</td>
<td><code>B();</code>$rightarrow$ The base constructor(second)</td>
<td><code>A();</code>$rightarrow$ The derived constructor</td>
</tr>

<tr>
<td rowspan="3"><code>class A:public B, virtual public C{};</code></td>
</tr>

<tr>
<td><code>C();</code>$rightarrow$ The virtual base class constructor</td>
<td><code>B();</code>$rightarrow$ The base constructor</td>
<td><code>A();</code>$rightarrow$ The derived constructor</td>
</tr>

</table>

<p align="center">
&#9678; &#9678; &#9678;
</p>
