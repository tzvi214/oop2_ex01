#pragma once
#include "SqrMatrix.h"

class Operation
{
public:
	 Operation() = default;
	~Operation() = default;
	virtual SqrMatrix calc(const SqrMatrix) {};
	virtual void print() const {}; // print the name of tha class (virtual).
private:

};