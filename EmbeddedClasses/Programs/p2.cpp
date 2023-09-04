// Embedded classes

#include<iostream>

using namespace std;

class subSuper1{

	public:
		subSuper1(int arg){
			cout<<"Hello from subSuper1!\n";
			cout<<"Argument value = "<<arg<<"\n";
		}
};

class subSuper2{

	public:
		subSuper2(int arg){
			cout<<"Hello from subSuper2!\n";
			cout<<"Argument value = "<<arg<<"\n";
		}
};

class Super{

	subSuper1 s1;
	subSuper2 s2;

	public:
		Super(int arg1, int arg2):
			s2(arg1), s1(arg2){
			cout<<"Hello from Super!\n";
		}
};


int main(void){

	Super super(120, 140);

	return 0;
}
