#include<iostream>

using namespace std;

class Integer{
	int val;

	public:
	Integer(){
		val=0;
	}

	Integer(int val){
		this->val=val;
	}

	Integer& operator+(Integer second){
		val=val+second.val;

		return *this;
	}

	Integer& operator+=(Integer second){
		val=val+second.val;

		return *this;
	}

	Integer& operator-(Integer second){
		val=val-second.val;

		return *this;
	}

	Integer& operator-=(Integer second){
		val-=second.val;

		return *this;
	}

	void show(){
		cout<<"value = "<<val<<"\n";
	}
};

int main(void){

	Integer first(10), second(20);

	cout<<"First value:\n";
	first.show();
	cout<<"Second value:\n";
	second.show();

	first=first+second;               // first=first.operator+(second);

	cout<<"First value:\n";
	first.show();
	cout<<"Second value:\n";
	second.show();

	first+=second;                    // equivalent to writing first.operator+=(second);

	cout<<"First value:\n";
	first.show();
	cout<<"Second value:\n";
	second.show();

	first=first-second;               // equivalent to writing first=first.operator-(second);

	cout<<"First value:\n";
	first.show();
	cout<<"Second value:\n";
	second.show();

	first-=second;                    // equivalent to writing first.operator-=(second);

	cout<<"First value:\n";
	first.show();
	cout<<"Second value:\n";
	second.show();

	return 0;
}
