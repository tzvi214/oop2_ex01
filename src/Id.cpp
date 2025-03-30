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
SqrMatrix Id::calc(std::vector<SqrMatrix> op)
{
	return op.at(0) ;
}
//----------------------------------------------------
SqrMatrix Id::calcFromMatrix(SqrMatrix matrix)
{
	return matrix;
}
