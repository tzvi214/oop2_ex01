#include "Add.h"

Add::Add(std::shared_ptr<Operation> aptr, std::shared_ptr<Operation> bptr)
	:Operation(creatName(aptr, bptr)), m_ptr1{ aptr }, m_ptr2{ bptr }
{}


//-------------------------------------------
std::string Add::creatName(std::shared_ptr<Operation> aptr, std::shared_ptr<Operation> bptr)
{
	std::string name{ aptr->getName() + " + " + bptr->getName() };
	return name;
}
//-------------------------------------------
SqrMatrix Add::calc(const SqrMatrix matrixA, const SqrMatrix matrixB)
{
	return m_ptr1->calc(matrixA) + m_ptr2->calc(matrixB);
}
//-------------------------------------------