#include<iostream>
#include<stdlib.h>

using namespace std;

class Array{
	int*array;

	public:

	int size;
	Array(int size){
		this->size=size;

		array=(int*)calloc(this->size, sizeof(int));
	}

	Array(int size, int iniVal){
		this->size=size;

		array=(int*)calloc(this->size, sizeof(int));

		for(int i=0; i<size; i++)
			array[i]=iniVal;
	}

	~Array(){
		cout<<"Memory for array cleared!\n";
		free(array);
	}

	void evaluateArray(){
		for(int i=0; i<size; i++){
			cout<<"Element "<<i+1<<": ";
			cin>>array[i];
		}
	}

	int operator[](int index){
		return array[index];
	}
};

int main(void){

	Array arr1(5);

	cout<<"Enter elements into the array:\n";

	arr1.evaluateArray();

	for(int i=0; i<arr1.size; i++)
		cout<<arr1[i]<<" ";              // equivalent to writing: cout<<arr1.operator[](i)<<" ";
	cout<<"\n";
	return 0;
}
