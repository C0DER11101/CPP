# Exception Handling
* **Exceptions** are runtime anomalies or unusual conditions that a program may encounter while executing.

## <ins>Types of Exceptions</ins>
* Synchronous exceptions $\rightarrow$ <em>Out-of-range, over-flow errors</em>.
* Asynchronous exceptions $\rightarrow$ <em>Keyboard interrupts</em>.

## <ins>Exception handling mechanism</ins>
* Built upon $3$ keywords: `try`, `throw` and `catch`.

### <ins>try</ins>
* Used to preface a block of statements which may generate exceptions.
### <ins>throw</ins>
* When an exception is detected it's thrown the **throw** statement.
### <ins>catch</ins>
* Catches the exception thrown by the **throw** statement in the **try** block.
* Must **immediately** follow the **try** block that throws the exception.

${\color{Yellow}General\ form\:}$
```c++
try{
	//....code.....
	throw exception;
}

catch(type argument){
	// code.....
}
```
* Exceptions **are objects** used to **transmit** information about a problem.

* When the **try** block throws an exception, the program control leaves the try block and enters the **catch** statement of the **catch** block.
* If the type of the object thrown matches the argument type in the **catch** statement, then the **catch** block is executed for handling the exception otherwise the program is aborted with the help of **abort()** function which is invoked **by default**.
* When no exception is detected then the **catch** block is _skipped_.
* The point at which the **throw** is executed is called the **throw point**.
* Once an exception is thrown to the **catch** block, then the control cannot return to the **throw point**.


## <ins>Throwing mechanism</ins>
* The **throw** statement takes $3$ forms:
	1. `throw(exception);`
	2. `throw exception;`
	3. `throw;`

`exception` can be of any type, **including constants**.

## <ins>Catching mechanism</ins>
* A **catch** block looks like a function definition and is of the form:
```c++
catch(type arg){
	// statements for managing exceptions
}
```
* Due to **mismatch** is an exception is not caught, abnormal program termination will occur.

## <ins>Multiple catch statements</ins>
* When there are multiple **catch** statements then they work pretty much like the **switch** case.
* The thrown exception is compared for a match with each **catch** argument, the first catch argument to yield a match is executed and after that the rest catches are **skipped**.

* [This program](https://github.com/C0DER11101/CPP/blob/quickCPP/ExceptionHandling/Programs/main1.cpp) shows multiple catch statements.

* `catch(...){}` i.e. the catch with ellipses **catches all types of exceptions**. It's like that **default** label in **switch case**.

<p align="center">
&#9678; &#9678; &#9678;
</p>
