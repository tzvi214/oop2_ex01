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
	 ~Transpose() = default; 
	virtual SqrMatrix calc(std::vector<SqrMatrix>)override;
private:
	
};