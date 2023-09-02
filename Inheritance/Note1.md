# Inheritance

* Mechanism of deriving a new class from an old class is called inheritance.

The old class is known as the **base class** and the new class is known as the **subclass** or the **derived class**.

## <ins>Defining derived classes</ins>

${\color{Yellow}General\ form\:}$
```c++
class derivedClassName:visibilityMode baseClassName{
	// member of derived class
};
```

* If `visibilityMode` is not specified then the `derivedClassName` is derived in **private** mode.
* **Private** members of the `baseClassName` are **never** inherited regardless of the visibility mode.

## <ins>Visibility of inherited members</ins>

<table>
<tr>
<td rowspan="3"><strong>Base class members</strong></td>
<td rowspan="3"><strong>are</strong></td>
<td colspan="3"><strong>Derived class visibility</strong></td>
</tr>

<tr>
<td colspan="3">Derivation mode</td>
</tr>

<tr>
<td><strong>Public</strong</td>
<td><strong>Private</strong</td>
<td><strong>Protected</strong</td>
</tr>

<tr>
<td>Private members</td>
<td>$\rightarrow$</td>
<td>not inherited</td>
<td>not inherited</td>
<td>not inherited</td>
</tr>
</table>

<p align="center">
&#9678; &#9678; &#9678;
</p>
