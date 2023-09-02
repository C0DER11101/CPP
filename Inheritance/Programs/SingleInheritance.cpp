#include<iostream>

using namespace std;

class Super{
	int value;

	public:

	void show();
};

class Sub: public Super{
	int value2;

	public:
	
	void Show();
};

void Super::show(){
	value=100;
	cout<<"Value = "<<value<<"\n";
}

void Sub::Show(){
	value2=1000;
	cout<<"Value2 = "<<value2<<"\n";
}

int main(void){
	Super super;

	super.show();

	Sub sub;

	sub.Show();
	return 0;
}
