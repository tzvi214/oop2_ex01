#include "Transpose.h"


Transpose::Transpose()
	:Operation("Transpose", 1)
{}
//----------------------------------------------------
SqrMatrix Transpose::calc(int size)
{
	cout << "Enter a " << size << " x" << size << " matrix:" << endl;
	SqrMatrix matrix(size);

	cin >> matrix;
	return matrix.transpose();
}
