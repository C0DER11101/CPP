#include<iostream>

using namespace std;

class Animals{

	public:
		void about(){
			cout<<"This is an animal\n";
		}
};

class Mammals: public Animals{

	public:
		void about(){
			cout<<"This is a mammal\n";
		}
};

class Herbivores{

	public:
		void about(){
			cout<<"This is a herbivore\n";
		}
};

class Cow:public Mammals, public Herbivores{

	public:
		void about(){
			cout<<"A cow is a herbivore mammal\n";
		}
};

int main(void){
	Cow cow;

	cow.about();
	return 0;
}
