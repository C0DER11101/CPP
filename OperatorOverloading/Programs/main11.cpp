#include<iostream>

using namespace std;

class Sample{
	
	public:

		int val;

		Sample(int val){
			this->val=val;
		}

		Sample operator->(){         // ERROR: Must return a pointer to the class Sample
			return *this;
		}
};

int main(void){

	Sample sample(120);

	//cout<<sample->val<<"\n";         // because sample->val; actually this:  (sample.operator->())->val
	return 0;
}
