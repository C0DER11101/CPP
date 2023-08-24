#include<iostream>

using namespace std;

class Matrix{

	int**matrix;
	int row, col;
	public:

	Matrix(int row, int col){
		this->row=row;
		this->col=col;

		matrix=(int**)calloc(this->row, sizeof(int*));
		for(int i=0; i<row; i++)
			matrix[i]=(int*)calloc(this->col, sizeof(int));
	}

	void initVal(int val) const{
		for(int i=0; i<row; i++)
			for(int j=0; j<col; j++)
				matrix[i][j]=val;
	}

	void showMatrix() const;

	int*getRowCol(){           // non-const member function!!
		int*values=(int*)calloc(2, sizeof(int));
		values[0]=row;
		values[1]=col;

		return values;
	}

	int*getDim() const{
		int*values=(int*)calloc(2, sizeof(int));
		values[0]=row;
		values[1]=col;

		return values;
	}

	void clean() const{
		for(int i=0; i<row; i++)
			free(matrix[i]);

		free(matrix);
	}

	void modVal(int newVal) const{
		for(int i=0; i<row; i++)
			for(int j=0; j<col; j++)
				matrix[i][j]=newVal;
	}
};

void Matrix::showMatrix() const{
	for(int i=0; i<row; i++){
		for(int j=0; j<col; j++)
			cout<<matrix[i][j]<<" ";
		cout<<"\n";
	}
}


int main(void){
	const Matrix matrixA(3, 4);
	Matrix matrixB(3, 4);
	//matrixB=matrixA; // No issues!!
	matrixA.initVal(9);
	matrixA.showMatrix();

	//int*rowsAndCols=matrixA.getRowCol();            // ERROR: cannot call a non-const member function via a const class object
	int*dims=matrixA.getDim();

	cout<<"ROW: "<<dims[0]<<"\n"<<"COLUMNS: "<<dims[1]<<"\n";

	free(dims);

	cout<<"\n\n";

	matrixA.modVal(1); // modifiable!!
	matrixA.showMatrix();

	matrixB.initVal(10);    // no issues!!
	matrixB.showMatrix();

	//matrixA=matrixB; // ERROR: cannot change the value of const class object by assigning it the value of a different object of the same class which is non-const!!

	matrixA.clean();

	matrixB.clean();

	return 0;
}
