#include<iostream>

using namespace std;

template<typename T1=int, typename T2=char>
class Super{
	T1 a;
	T2 b;

	public:
	Super(T1 val1, T2 val2):
		a(val1), b(val2){
			cout<<"Super object created!\n";
		}

	void show(){
		cout<<"a = "<<a<<" & b = "<<b<<"\n";
	}
};

int main(void){

	Super<> superObj1(12, 'a');                // Using the default types in the templates!!

	Super<char, double> superObj2('b', 34.5);

	cout<<"Super object-1\n";
	superObj1.show();

	cout<<"Super object-2\n";
	superObj2.show();

	return 0;
}
