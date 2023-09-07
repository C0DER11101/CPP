#include<iostream>

using namespace std;

template<typename T>
class Super{
	T value;

	public:
	Super(int val):
		value(val){
			cout<<"Object created!\n";
		}

	void show();
};

template<typename T>
void Super<T>::show(){
	cout<<"Value = "<<value<<"\n";
}

int main(void){

	Super<int>super(100);

	super.show();

	return 0;
}
