// Constructors in derived classes

#include<iostream>

using namespace std;

class Super{
	public:
		Super(){
			cout<<"Super object created!\n";
		}
};

class Sub:public Super{
	public:
};

int main(void){
	Sub sub;           // Surprise awaits!! Just run this program and see for yourself!!
	return 0;
}
