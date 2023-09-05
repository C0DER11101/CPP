#include<iostream>

using namespace std;

class Sample{

	public:

	int val;

	Sample(int val){
		this->val=val;
	}

	Sample*operator->(){
		return this;
	}
};

int main(void){
	Sample sample(120);

	cout<<sample->val<<"\n";
	return 0;
}
