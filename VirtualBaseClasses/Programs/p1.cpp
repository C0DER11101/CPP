#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

class grandParent{

	protected:
		char*name;

	public:
		void about(){
			name=(char*)calloc(30, sizeof(char));
			strcpy(name, "Grandparent");
			cout<<name<<" of the child\n";
		}
};

class parent1:public grandParent{

	protected:
		char*name;

	public:
		void about(){
			name=(char*)calloc(30, sizeof(char));
			strcpy(name, "Parent1");
			cout<<name<<" of the child\n";
		}
};

class parent2:public grandParent{

	protected:
		char*name;

	public:
		void about(){
			name=(char*)calloc(30, sizeof(char));
			strcpy(name, "Parent2");
			cout<<name<<" of the child\n";
		}
};

class child:public parent1, public parent2{

	protected:
		char*name;

	public:
		void about(){
			name=(char*)calloc(30, sizeof(char));
			strcpy(name, "Child");
			cout<<"The "<<name<<"\n";
		}
};

int main(void){	

	child chd;

	//chd.grandParent::about();     // Call to about(); of grandParent is ambiguous because parent1 and parent2 both inherited from grandparent and then again the child also inherited from parent1 and parent2 both, so now the child has sort two copies of about() of grandParent.
	return 0;
}
