# Overloading template functions
* A template function may be overloaded either by template functions or by ordinary function of its name.

## <ins>Overloading resolution</ins>
1. Call an ordinary function that has an exact match.
2. Call a template function that could be created with an exact match.
3. Try normal overloading resolution to ordinary functions and call the one that matches.

* No **automatic** conversions are applied to the arguments on template functions.

* [This program](https://github.com/C0DER11101/CPP/blob/quickCPP/Templates/Programs/main7.cpp) shows overloading of template functions.

<p align="center">
&#9678; &#9678; &#9678;
</p>
