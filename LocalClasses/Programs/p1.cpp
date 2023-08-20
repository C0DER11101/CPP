#include<bits/stdc++.h>

using namespace std;

int globalVar=11101;

int main(void){                   // The enclosing function of the local class Main
	int mainVal=9000;
	static int statVar=1;

	class Main{                           // Local class!
		int value;
		//static int objCount;          // ERROR: cannot have static data members, so forget about defining them!!

		public:
		Main(){
			value=100;
		}

		int getValue(){
			return value;
		}

		void initValue(int val){
			//value=val+mainVal;     // ERROR: cannot use local variable of the function!!
			value=val;
		}

		//void showValue();                // ERROR: no declaration of function inside the class, define it instead!

		void showValue(){
			cout<<"Value = "<<value<<"\n";
			cout<<"Static variable = "<<statVar<<"\n";
			cout<<"Global variable = "<<globalVar<<"\n";
		}
	};

	/*
	void Main::showValue(){                   // ERROR: defining of member functions outside the local class isn't allowed!!
		cout<<"Value = "<<value<<"\n";
	}
	*/

	Main mn;

	mn.initValue(12);
	cout<<"From main(): Value of value = "<<mn.getValue()<<"\n";
	mn.showValue();

	//cout<<"Value of value = "<<value<<endl; // ERROR: accessing private members of the class from the enclosing function

	return 0;
}
