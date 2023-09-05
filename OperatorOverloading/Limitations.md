# Operators that cannot be overloaded

<table>
<tr>
<td><strong>Operator</strong></td>
<td><strong>Description</strong></td>
</tr>

<tr>
<td><code>sizeof()</code></td>
<td>The size of operator</td>
</tr>

<tr>
<td><code>.</code></td>
<td>Membership operator</td>
</tr>

<tr>
<td><code>.*</code></td>
<td>Pointer-to-member operator</td>
</tr>

<tr>
<td><code>::</code></td>
<td>Scope resolution operator</td>
</tr>

<tr>
<td><code>?:</code></td>
<td>Conditional operator</td>
</tr>

</table>

# Operators that have to be a member function of the class in which they are defined in

<table>
<tr>
<td><strong>Operator</strong</td>
<td><strong>Description</strong</td>
</tr>

<tr>
<td><code>=</code></td>
<td>Assignment operator</td>
</tr>

<tr>
<td><code>()</code></td>
<td>Function call operator</td>
</tr>

<tr>
<td><code>[]</code></td>
<td>Subscripting operator</td>
</tr>

<tr>
<td><code>-></code></td>
<td>Class member access operator</td>
</tr>

</table>

These functions **cannot** be used as **friend** functions!

<p align="center">
&#9678; &#9678; &#9678;
</p>
