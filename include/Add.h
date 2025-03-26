#pragma once
#include "operation.h"
#include "SqrMatrix.h"
#include <string>
#include <memory>
#include <iostream>
class Add : public Operation
{
public:
	Add(std::shared_ptr<Operation>, std::shared_ptr<Operation>);
	
	virtual SqrMatrix calc(const SqrMatrix, const SqrMatrix);

private:
	//std::string m_name;
	std::shared_ptr<Operation> m_ptr1;
	std::shared_ptr<Operation> m_ptr2;
	std::string creatName(std::shared_ptr<Operation>, std::shared_ptr<Operation>);
};

