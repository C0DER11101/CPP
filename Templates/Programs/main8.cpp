#include<iostream>

using namespace std;

template<typename T, int size>
class array{
	T arr[size];

	public:

	array(){
		cout<<"Array object created!!\n";
	}
};

int main(void){
	array<int, 5>arr;     // creating an array of integers of size 5
	return 0;
}
