#include<iostream>

using namespace std;

class Test{
	
	int*array;

	public:

	Test(){
		array=new int[5];
	}

	~Test(){
		try{
			delete[] array;
			cout<<"In the try block of the destructor!\n";
		}

		catch(exception&e){
			cout<<"\nIn the catch block of the destructor!\n";
			cerr<<e.what()<<"\n";
		}
	}
};

int main(void){

	try{
		Test t1a;

		throw runtime_error("ERROR");
	}

	catch(exception& e){
		cout<<"\nIn the catch block of the main()\n";
		cerr<<e.what()<<"\n";
	}

	return 0;
}
