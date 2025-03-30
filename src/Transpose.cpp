#include "Transpose.h"


Transpose::Transpose()
	:Operation("Transpose", 1)
{}
//----------------------------------------------------
SqrMatrix Transpose::calc(int size)
{
	Operation::printName();
	cout << "Enter a " << size << " x " << size << "matrix:" << endl;
	SqrMatrix matrix(size);

	cin >> matrix;
	return matrix.transpose();
}
SqrMatrix Transpose::calc(std::vector<SqrMatrix> op)
{
	return op.at(0).transpose();
}
//----------------------------------------------------
SqrMatrix Transpose::calcFromMatrix(SqrMatrix matrix)
{
	return matrix.transpose() ;
}
