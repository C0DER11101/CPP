#include<iostream>

using namespace std;

class Array{
	int*array;
	int len;

	public:

	Array(){
		array=NULL;
		len=0;
		cout<<"\nNULL array constructed!!\n";
	}

	Array(int length){

		len=length;
		cout<<"\nArray of size "<<len<<" created\n";

		array=(int*)calloc(len, sizeof(int));

	}

	~Array(){
		printf("\nAddress of array to be destroyed: %p\n", &array);
		cout<<"\nDestroyed array of length "<<len<<"\n";
		if(array!=NULL)
			free(array);
	}

	void giveVal(){
		for(int i=0; i<len; i++)
			array[i]=2*i+1;
	}

	void showArr(){
		cout<<"\nArray of length: "<<len<<"\n";
		for(int i=0; i<len; i++)
			cout<<array[i]<<" ";
	}
};

int main(void){
	Array arr1(5);
	Array ar;

	{ // block
		Array a; // this object will be deleted in this block, because it's local to this block!
		a.showArr();
		ar.showArr(); // this object will not be deleted here!
	}

	arr1.giveVal();
	arr1.showArr();

	return 0;
}
