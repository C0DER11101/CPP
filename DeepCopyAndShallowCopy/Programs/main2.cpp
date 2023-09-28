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

	train(train& t){
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
