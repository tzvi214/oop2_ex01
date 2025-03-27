#pragma once
#include "operation.h"
#include "SqrMatrix.h"
#include <string>
//#include <iostream>

using std::cout;
using std::endl;
class Scal :public Operation
{
public:
	Scal(int);
	virtual ~Scal() = default;
	virtual SqrMatrix calc(int );
private:
	int m_scale;
};