#include "Transpose.h"


Transpose::Transpose()
	:Operation("Transpose", 1)//  tran
{}
//----------------------------------------------------

SqrMatrix Transpose::calc(std::vector<SqrMatrix> op)
{
	return op.at(0).transpose();
}
