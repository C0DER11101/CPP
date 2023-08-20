#include<bits/stdc++.h>

using namespace std;

class A{
	public:
		int m;

		A(){
			m=100;
		}

		int*addrMem(){
			return &m;
		}
};

int main(void){
	// pointer to the data member 'm' of class A

	int A::*p=&A::m;

	A a;
	cout<<a.*p<<"\n";
	cout<<a.m<<"\n";

	return 0;
}
