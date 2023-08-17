/*This code has been copied from book */

#include<iostream>

using namespace std;

class invent1{  // source class
	int code;
	int items;
	float price;

	public:

	invent1(int a, int b, float p){
		code=a;
		items=b;
		price=p;
	}

	void putData(){
		cout<<"Code: "<<code<<endl;
		cout<<"Items: "<<items<<endl;
		cout<<"Price: "<<price<<endl;
	}

	int getCode(){return code;}
	int getItems(){return items;}
	float getPrice(){return price;}
	operator float();
};

invent1::operator float()
{
	return items*price;
}

class invent2{   // destination class
	int code;
	float value;
	
	public:

	invent2(){
		code=0, value=0;
	}

	invent2(int x, float y){
		code=x, value=y;
	}

	invent2(invent1 p){
		code=p.getCode();
		value=p.getItems()*p.getPrice();
	}

	void putData(){
		cout<<"Code: "<<code<<"\n";
		cout<<"Value: "<<value<<"\n";
	}
};

int main(void){
	invent1 s1(100, 5, 140.0);
	invent2 d1;
	float total_value;

	/* class to basic */

	total_value=s1; // equivalent to writing:  total_value=float(s1);

	/* one class type to another class type */
	d1=s1; // equivalent to writing: d1=invent2(s1);

	cout<<"Details of invent1:\n";
	s1.putData();

	cout<<"Details of invent2:\n";
	d1.putData();

	cout<<"Stock value: "<<total_value<<"\n";

	return 0;
}
