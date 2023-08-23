#include<iostream>
#include<string.h>

using namespace std;

class String{

	char*str;
	int bufferLen;

	public:

	String(int len){           // dynamic constructor
		bufferLen=len;
		str=(char*)calloc(bufferLen, sizeof(char));
	}

	void inputStr(const char*str){
		strcpy(this->str, str);
	}

	void showStr(){
		cout<<"String: "<<str<<"\n";
	}

	void clean(){
		free(str);
	}
};

int main(void){

	String s1(5);

	s1.inputStr("Two");
	s1.showStr();

	s1.clean();

	return 0;
}
