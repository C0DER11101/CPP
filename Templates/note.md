# Templates
* Considered as a kind of **macro**.
* Also called parameterized classes or functions.
* <ins>General meaning of a template</ins>: <em>Something serving as a <strong>model</strong> for other people to copy.</em>

## <ins>Class templates</ins>

${\color{Yellow}General\ format\ of\ class\ templates}$
```c++
template<class T>
class className{
	//.....
	//.....
	// class member specifications with anonymous type T wherever appropriate
};
```

Note that in place of `template<class T>` you can also use `template<typename T>`.

${\color{Yellow}Syntax\ for\ defining\ an\ object\ of\ a\ template\ class\:}$
```c++
className<T>objectName(argList);
```

`T` can be any **valid** type such as `int`, `float`, `double`, etc.. or any user-defined type such a class name or struct name, etc..

* [This program](https://github.com/C0DER11101/CPP/blob/quickCPP/Templates/Programs/main1.cpp) implements a vector class using templates.

## <ins>Class templates with multiple parameters</ins>
${\color{Yellow}General\ form\:}$
```c++
template<class T1, class T2, ......>
class className{
	//......
	//......
	//......
};
```

* [Program](https://github.com/C0DER11101/CPP/blob/quickCPP/Templates/Programs/main2.cpp) showing class templates with multiple parameters.

## <ins>Default types in templates</ins>
* [This Program](https://github.com/C0DER11101/CPP/blob/quickCPP/Templates/Programs/main3.cpp) shows how the default types in templates work. Notice in `main()` I wrote `Super<> superObj1(12, 'a');`, here the default types in the templates are `int` and `char` so when I wrote `Super<> superObj1(12, 'a');` I meant that I am using the default types in the templates i.e. the first instance variable is an integer and the second instance variable is a character.

<p align="center">
&#9678; &#9678; &#9678;
</p>
