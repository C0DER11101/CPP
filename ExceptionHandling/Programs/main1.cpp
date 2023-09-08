#include<iostream>

using namespace std;

int main(void){

	int a, b;

	cout<<"Enter two integers: ";
	scanf("%d%d", &a, &b);

	try{
		if(b==0)
			throw b;
		cout<<"a/b = "<<a/b<<"\n";
	}

	catch(char ch){
		cout<<"Caught a character!\n";
	}

	catch(float fl){
		cout<<"Caught a foat!\n";
	}

	catch(double dl){
		cout<<"Caught a double!\n";
	}

	catch(int in){
		cout<<"Caught an integer!\n";
	}

	catch(...){                                              // works like the default in switch case
		cout<<"\nCaught an exception!\n";
	}

	return 0;
}
