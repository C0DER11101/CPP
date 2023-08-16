# One class type to another class type

```c
objX=objY;
```
`objX` is an object of _class X_ and `objY` is an object of _class Y_. Both these are objects are of different class types.

Here, in the assignment statement above, the _class Y_ type data is converted to _class X_ type data and this converted value is
assigned `objX`.

Since the conversion takes place from _class Y_ to _class X_, _Y_ is known as the **<ins>source</ins>** class and _X_ is known
as the **<ins>destination</ins>** class.

<ins>Such conversions can be carried out by either a **constructor** or a **conversion function**</ins>.

The choice is highly influenced by where we want the type-conversion function to be located i.e whether we want it to be
in the source class or in the destination class.

_The type conversion function converts the class object of which it's a member to the_ `typeName`.
In case of conversion between objects, `typeName` refers to the <ins>destination class</ins>.

So, when a class needs to be converted, a casting operator function can be used(i.e source class). The conversion takes place in
the source class and the result is given to the destination class.

<ins>**Conversion table**</ins>

<table>
<tr>
<td>Conversion required</td>
<td colspan="2">Convertion takes place in</td>
</tr>
<tr>
<td></td>
<td>Source class</td>
<td>Destination class</td>
</tr>
</table>

<p align="center">
&#9678; &#9678; &#9678;
</p>
