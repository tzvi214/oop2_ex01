#pragma once
#include "operation.h"
#include "SqrMatrix.h"
#include <iostream>
#include <memory>
#include <vector>

using std::cout;
using std::endl;
class Eval
{
public:
	Eval();
	~Eval() = default;
	void calculate(std::shared_ptr<Operation>, int);
	
};