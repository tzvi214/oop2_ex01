#pragma once
#include "operation.h"

class Transpose : public Operation
{
public:
	Transpose() = default;
	 ~Transpose() = default; // Make destructor virtual
	virtual SqrMatrix calc(const SqrMatrix);
	virtual void print() const { std::cout << m_name << std::endl ; }
private:
	std::string m_name{ "Transpose" };
};