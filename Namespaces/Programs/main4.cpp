#include<iostream>

using namespace std;

namespace outer{
	int m=100;
	namespace inner{
		int m=105;
	}
}

int main(void){
	// notice: no naming conflicts!

	printf("inner m = %d\n", outer::inner::m);            // inner is a member of outer and m is a member of inner
	printf("outer m = %d\n", outer::m);                   // m is a member of outer
	return 0;
}
