// Embedded classes

#include<iostream>

using namespace std;

class subSuper1{

	public:
		subSuper1(){
			cout<<"Hello from subSuper1!\n";
		}
};

class subSuper2{

	public:
		subSuper2(){
			cout<<"Hello from subSuper2!\n";
		}
};

class Super{

	subSuper1 s1;
	subSuper2 s2;

	public:
		Super(){
			cout<<"Hello from Super!\n";
		}

		/* The above constructor can also be defined in this way:
		   Super():
		   s1(), s2(){
		   		cout<<"Hello from Super!\n";
		   }
		 */
};


int main(void){

	Super super;

	return 0;
}
