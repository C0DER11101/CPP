# Basic to class type conversion

Consider the following constructor:

```c++
string::string(char*s)
{
	length=strlen(s);
	p=new char[length+1];
	strcpy(p, s);
}
```
This constructor builds a string type objects.

Now, consider these statements:

```c++
string s1, s2;

char*name1="IBM PC";
char*name2="Apple";

s1=string(name1);
s2=name2;
```

`s1=string(name1);` first converts the string `name1` from `char*` type and then assigns the string type values to the object s1.
This statement calls the constructor explicitly.

`s2=name2;` also does the same thing by calling the constructor <ins>implicitly</ins>.

**One more example:**

```c++
class time
{
	int hrs;
	int mins;

	public:
		time(int t)
		{
			hrs=t/60;
			mins=t%60;
		}
};
```


Now look at the following:

```c++
time T1;
int duration=85;
T1=duration;
```

`T1=duration;` basically calls the constructor time() implicitly which converts the duration to hours(hrs) and minutes(mins).

It's equivalent to writing: `T1=time(duration);`

This is just a basic constructor call but it looks like the variable `duration` is being typecast to time type.

<ins>**The constructors used for type conversion take a single argument whose type is to be converted.**</ins>

<p align="center">
&#9678; &#9678; &#9678;
</p>
