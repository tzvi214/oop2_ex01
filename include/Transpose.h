#pragma once
#include "operation.h"
#include <string>
#include "SqrMatrix.h"

using std::cout;
using std::endl;
class Transpose : public Operation
{
public:
	Transpose();
	 ~Transpose() = default; // Make destructor virtual
	virtual SqrMatrix calc(int);
	virtual SqrMatrix calc(std::vector<SqrMatrix>);
	virtual SqrMatrix calcFromMatrix(SqrMatrix);
private:
	
};