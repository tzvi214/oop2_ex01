#include "Id.h"

Id::Id()
	:Operation("Id", 1)
{}
//----------------------------------------------------

SqrMatrix Id::calc(std::vector<SqrMatrix> op)
{
	return op.at(0) ;
}

