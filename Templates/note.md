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

${\color{Yellow}Syntax\ for\ defining\ an\ object\ of\ a\ template\ class\:}$
```c++
className<T>objectName(argList);
```

`T` can be any **valid** type such as `int`, `float`, `double`, etc.. or any user-defined type such a class name or struct name, etc..

<p align="center">
&#9678; &#9678; &#9678;
</p>
