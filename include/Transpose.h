#pragma once
#include "operation.h"
#include <string>
#include "SqrMatrix.h"
//#include <iostream>

using std::cout;
using std::endl;
class Transpose : public Operation
{
public:
	Transpose();
	 ~Transpose() = default; // Make destructor virtual
	virtual SqrMatrix calc(int);
private:
	
};