// SOLUTION to the problem in p1.cpp

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
			free(name);
		}
};

class parent1:public virtual grandParent{

	protected:
		char*name;

	public:
		void about(){
			name=(char*)calloc(30, sizeof(char));
			strcpy(name, "Parent1");
			cout<<name<<" of the child\n";
			free(name);
		}
};

class parent2:virtual public grandParent{

	protected:
		char*name;

	public:
		void about(){
			name=(char*)calloc(30, sizeof(char));
			strcpy(name, "Parent2");
			cout<<name<<" of the child\n";
			free(name);
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
			free(name);
		}
};

int main(void){	

	child chd;

	chd.grandParent::about();

	return 0;
}
