/* Shallow copy */

/* No ERRORS in this program, but will throw a double free() detected message */

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

	train(train &t)
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
