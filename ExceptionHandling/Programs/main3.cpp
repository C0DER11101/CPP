#include<iostream>

using namespace std;

int main(void){
	int num;

	cout<<"enter a number: ";
	scanf("%d", &num);

	try{
		if(num || !num)
			throw num;
	}

	catch(float f){
		cout<<"Caught float exception\n";
		cout<<"Exception: "<<f<<"\n";
	}

	catch(int i){
		cout<<"\nCaught integer exception\n";
		cout<<"Exception: "<<i<<"\n";

		throw;
	}

	catch(...){
		cout<<"Caught any exception\n";
		cout<<"Exception: any\n";
	}

	try{
		cout<<"In try block\n";
		throw;
	}

	catch(int i){
		cout<<"\nCaught integer exception\n";
		cout<<"Exception: "<<i<<"\n";
	}

	return 0;
}
