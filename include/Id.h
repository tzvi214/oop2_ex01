#pragma once
#include "operation.h"

class Id :public Operation
{
public:
	Id() = default;
	~Id() = default;
	virtual SqrMatrix calc(const SqrMatrix);
	virtual void print() const;
};