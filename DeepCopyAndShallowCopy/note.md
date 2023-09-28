# Deep copy and shallow copy

## <ins>Shallow copy</ins>
* An instance is created by simply copying the data of all the instance variables of the original instance. If some variables are dynamically allocated then the copied instance will also reference the same memory location. This will create **ambiguity**, **run-time errors**, **dangling pointers**.
* Since both the instances(the copied one and the original one) referene to the same memory(dynamically allocated one), then change made by one will reflect in the other instance.
* Here, you can say that data is **shared** between the various instances of the same class.

Have a look at the program below:

```c++
#include<iostream>

using namespace std;

class train
{
	int bogie; // number of bogies in the train
	int*body;

	public:

	train(int len)
	{
		bogie=len;
		body=new int[bogie];
	}

	train(train &t)      // copy constructor
	{
		bogie=t.bogie;
		body=t.body; //train t2's body is storing the address of the train t1's body!! This is not allowed!!
	}

	~train()
	{
		delete[] body;
	}

	void AssignPassengers(int, int, int); // assign number of passengers to the first 3 bogies
	void showTrain();
	void showAddress(); // show the address of the train!
};

void train::showTrain()
{
	printf("Number of bogies: %d\n", bogie);
	printf("Number of passengers in the 1st bogie: %d\n", body[0]);
}

void train::showAddress()
{
	printf("Address of train: %p\n", body);
}

void train::AssignPassengers(int _0, int _1, int _2)
{
	body[0]=_0;
	body[1]=_1;
	body[2]=_2;
}

int main(void)
{
	train t1(3); // train t1 has 3 bogies

	t1.AssignPassengers(5, 10, 15);

	train t2=t1; // calls the copy constructor!

	cout<<"Train 1\n";
	t1.showTrain();
	t1.showAddress();

	cout<<"Train 2\n";
	t2.showTrain();
	t2.showAddress();

	return 0;
}
```

* [Link](https://github.com/C0DER11101/CPP/blob/quickCPP/DeepCopyAndShallowCopy/Programs/main1.cpp) to the actual program.

## <ins>Deep copy</ins>
* Here, data is not shared, rather **copied** to another instance.

Look at the code below to understand better:
```c++
#include<iostream>
#include<stdlib.h>

using namespace std;

class train{
	int bogie;
	int*body;


	public:

	train(int len){
		bogie=len;
		body=(int*)calloc(bogie, sizeof(int));
	}

	train(train& t){                             // here's where it's different from shallow copy's code; look at the body of the copy constructor
		bogie=t.bogie;
		body=(int*)calloc(bogie, sizeof(int));
	}

	~train(){
		delete[] body;
	}

	void AssignPassengers(int, int, int);
	void showTrain();
	void showAddress();
};

void train::AssignPassengers(int _0, int _1, int _2){
	body[0]=_0;
	body[1]=_1;
	body[2]=_2;
}

void train::showTrain(){
	printf("Number of bogies: %d\n", bogie);
	printf("Number of passengers in the 1st bogie: %d\n", body[0]);
}

void train::showAddress(){
	printf("Address of train: %p\n", body);
}

int main(void){
	train t1(3);
	t1.AssignPassengers(5, 10, 15);

	train t2=t1; // calls the copy constructor train::train(train& t)

	puts("Train-1");
	t1.showTrain();
	t1.showAddress();

	puts("Train-2");
	t1.showTrain();
	t1.showAddress();

	return 0;
}
```

<p align="center">
&#9678; &#9678; &#9678;
</p>
