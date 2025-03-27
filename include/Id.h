#pragma once
#include <iostream>
#include "operation.h"
#include "SqrMatrix.h"


using std::cout;
using std::endl;
class Id :public Operation
{
public:
	Id() ;
	~Id() = default;
	virtual SqrMatrix calc(int);
	virtual SqrMatrix calcFromMatrix(SqrMatrix);
};