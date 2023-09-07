#include<iostream>

using namespace std;

class Super{

	public:
		Super(){
			cout<<"Super object created!\n";
		}

		virtual void greet(){
			cout<<"\"Hello\" from Super\n";
		}

		virtual ~Super(){
			cout<<"Super object destroyed!\n";
		}
};

class Sub:public Super{

	public:
		Sub(){
			cout<<"Sub object created!\n";
		}

		void greet(){
			cout<<"\"Hello\" from Sub\n";
		}

		~Sub(){
			cout<<"Sub object destroyed!\n";
		}
};

int main(void){

	Super*supPtr=new Sub();

	supPtr->greet();

	delete supPtr;             // calls the destructor of Sub!! Then the destructor of Super is called!!

	return 0;
}
