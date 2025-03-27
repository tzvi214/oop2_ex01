#include "Id.h"

Id::Id()
	:Operation("Id", 1)
{}
//----------------------------------------------------
SqrMatrix Id::calc(int size)
{
	Operation::printName();
	cout << "Enter a " << size << " x " << size << "matrix:" << endl;
	SqrMatrix matrix(size);

	cin >> matrix;
	return matrix;
}
//----------------------------------------------------
SqrMatrix Id::calcFromMatrix(SqrMatrix matrix)
{
	return matrix;
}
