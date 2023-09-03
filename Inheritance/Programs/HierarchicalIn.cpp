// Hierarchical inheritance

#include<iostream>

using namespace std;

class Super{
	public:
		void greetSuper(){
			cout<<"Hello from class \"Super\"!\n";
		}
};

class Sub1:public Super{
	public:
		void greetSub1(){
			cout<<"Hello from class \"Sub1\"!\n";
		}
};

class Sub2:public Super{
	public:
		void greetSub2(){
			cout<<"Hello from class \"Sub2\"!\n";
		}
};

int main(void){
	Sub2 sub2;

	sub2.greetSuper();
	sub2.greetSub2();
	return 0;
}
