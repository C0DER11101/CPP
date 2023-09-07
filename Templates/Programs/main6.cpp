#include<iostream>

using namespace std;

template<class T1, class T2>
void show(T1 a, T2 b){
	cout<<"a = "<<a<<" & b = "<<b<<"\n";
}

int main(void){
	show('a', 'b');
	show(12, 'a');
	show(56.5f, 89);

	return 0;
}
