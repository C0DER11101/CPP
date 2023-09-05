#include<iostream>

using namespace std;

class Sample{
	int value;

	public:

	Sample(int val): value(val){
		cout<<"Object created!\n";
	}

	void show(){
		cout<<"Value = "<<value<<"\n";
		cout<<"Address of the object that invoked show(): "<<this<<"\n";            // and this give the same address
	}
};

int main(void){

	Sample sample(120);

	cout<<"Address of object of class Sample: "<<&sample<<"\n";          // This

	sample.show();

	return 0;
}
