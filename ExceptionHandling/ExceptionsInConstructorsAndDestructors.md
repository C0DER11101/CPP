# Exceptions in constructors and destructors
* The [program here](https://github.com/C0DER11101/CPP/blob/quickCPP/ExceptionHandling/Programs/main3.cpp) shows a very important concept of constructors throwing exceptions. In this program, the object of `Test2` is **incomplete** because when the constructor for this object was executing then after the `cout` statement, the control encountered a `throw` statement and from there the control was **thrown** to the `catch` block in the `main` and so while exiting the `try` block, the destructor for only `t1a` was called but for `t2a`, no destructor was called.
* [This program](https://github.com/C0DER11101/CPP/blob/quickCPP/ExceptionHandling/Programs/main4.cpp) shows exception handling in destructors. Here, inside the `try` of the `main`, the constructor for `t1a` gets called which allocates some memory dynamically to the instance variable `array`. After executing the constructor, the `throw` statement is encountered inside that `try` block and the control is **thrown** out of the `try` block, and as soon as the control is thrown out of the try block, the destructor for `t1a` is called and the `try` block in this destructor is executed. After the execution of the `try` of the destructor, the control gets caught by the `catch` of the `main`.
* When a constructor is called, it's expected to initialize the instance variables of the instance to their default values. If an error occurs during this process, then the constructor should be able to **handle the error**, gracefully.
* The same goes for destructors, but while destroying objects. A destructor's exceptions should be caught and dealt with if one is thrown while running.

<p align="center">
&#9678; &#9678; &#9678;
</p>
