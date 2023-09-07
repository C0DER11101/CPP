#include<iostream>
#include<stdlib.h>

using namespace std;

template<class T>
class Vector{
	T*array;
	static int elNo;

	public:
	int size;

	Vector(int sze): size(sze){
		array=(T*)calloc(size, sizeof(T));
	}

	Vector(int initVal, int sze): size(sze){
		array=(T*)calloc(size, sizeof(T));

		for(int i=0; i<size; i++)
			array[i]=initVal;
	}

	~Vector(){
		cout<<"\nMemory freed!\n";
		free(array);
	}

	int operator[](int idx){
		return array[idx];
	}

	void push_back(T value){
		array[elNo]=value;
		elNo++;
	}
};

template<class T>
int Vector<T>::elNo;

int main(void){

	Vector<int>vecArr(0, 5); // size of the vector is 5 and each element is 0

	cout<<"Enter elements into the vector:\n";

	int value;

	for(int i=0; i<vecArr.size; i++){
		cout<<"Element "<<i+1<<": ";
		scanf("%d", &value);

		vecArr.push_back(value);
	}

	cout<<"\nThe vector is:\n";

	for(int i=0; i<vecArr.size; i++)
		cout<<vecArr[i]<<" ";
	cout<<"\n";

	int array[vecArr.size];

	for(int i=0; i<vecArr.size; i++)
		array[i]=vecArr[i];

	cout<<"The array after copying the vector into it is:\n";

	for(int i=0; i<vecArr.size; i++)
		cout<<array[i]<<" ";
	cout<<"\n";

	return 0;
}
