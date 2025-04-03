#pragma once
#include "operation.h"
#include "SqrMatrix.h"
#include <string>
#include <memory>
#include <iostream>


using std::cout;
using std::endl;

class Add : public Operation
{
public:
	Add(std::shared_ptr<Operation>, std::shared_ptr<Operation>);
	virtual SqrMatrix calc(std::vector<SqrMatrix>) override;

private:
	std::shared_ptr<Operation> m_ptr1;
	std::shared_ptr<Operation> m_ptr2;
	std::string createName(std::shared_ptr<Operation>, std::shared_ptr<Operation>);
};

