#include<iostream>

using namespace std;

int add(int a, int b){
	cout<<"Normal add()\n";
	return (a+b);
}

template<typename T1, typename T2>
T1 add(T1 a, T2 b){
	cout<<"Template add()\n";
	return (a+b);
}

int main(void){

	int resultI=add(10, 20);                     // calls the normal add()
	cout<<"Result = "<<resultI<<"\n";

	float resultF=add(10, 20);                   // again calls the normal add() because the arguments are of integer type
	cout<<"Result = "<<resultF<<"\n";

	resultF=add(10.0f, 20.0f);                   // calls the template add()
	cout<<"Result = "<<resultF<<"\n";

	return 0;
}
