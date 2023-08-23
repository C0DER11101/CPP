#include<iostream>


using namespace std;

class sample{
	int value;

	public:
	sample(int);

	sample(sample&);  // copy constructor!

	void show();
	void modifyValue(int);
};

sample::sample(int val){
	value=val;
}

sample::sample(sample&s){
	cout<<"\nCopy constructor called!\n";
	value=s.value;
}

void sample::show(){
	cout<<"Value = "<<value<<"\n";
}

void sample::modifyValue(int val){
	value=val;
}

int main(void){

	sample s1(100);
	sample s2(s1);

	s1.show();
	s2.show();

	s2.modifyValue(200);

	s1.show();
	s2.show();

	sample s3=s1; // invokes the copy constructor because it exists in the program, otherwise simple object assignment would have taken place

	s3.show();
	return 0;
}
