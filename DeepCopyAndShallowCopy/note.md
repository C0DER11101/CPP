# Deep copy and shallow copy

## <ins>Shallow copy</ins>
* An instance is created by simply copying the data of all the instance variables of the original instance. If some variables are dynamically allocated then the copied instance will also reference the same memory location. This will create **ambiguity**, **run-time errors**, **dangling pointers**.
* Since both the instance(the copied one and the original one) referene to the same memory(dynamically allocated one), then change made by one will reflect in the other instance.
* [This program]() shows **shallow copy**.

## <ins>Deep copy</ins>

<p align="center">
&#9678; &#9678; &#9678;
</p>
