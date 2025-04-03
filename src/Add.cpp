#include "Add.h"

Add::Add(std::shared_ptr<Operation> aptr, std::shared_ptr<Operation> bptr)
	:Operation(createName(aptr, bptr), (aptr->getMatrixRequired() + bptr->getMatrixRequired())),
	           m_ptr1{aptr}, m_ptr2{bptr}	
{ }


//-------------------------------------------
SqrMatrix Add::calc(std::vector<SqrMatrix> op)
{
	
	int splitIndex = m_ptr1->getMatrixRequired();
	std::vector<SqrMatrix> a(op.begin(), op.begin() + splitIndex);
	std::vector<SqrMatrix> b(op.begin() + splitIndex, op.end());

	return m_ptr1->calc(a) + m_ptr2->calc(b);
}
//-------------------------------------------
std::string Add::createName(std::shared_ptr<Operation> aptr, std::shared_ptr<Operation> bptr)
{
	std::string newName;
	if (aptr->getMatrixRequired() % 2 == 0 && bptr->getMatrixRequired() % 2 == 0)
		newName = std::string{ "( " + aptr->getName() + " ) + (" + bptr->getName() + " )"};
	else if (aptr->getMatrixRequired() % 2 == 0){
		newName = std::string{ "( " + aptr->getName() + " ) + " + bptr->getName()};
	}
	else if (bptr->getMatrixRequired() % 2 == 0) {
		newName = std::string{ aptr->getName() + " + ( " + bptr->getName() + " )"};
	}
	else{
		newName = std::string{ aptr->getName() + " + " + bptr->getName() };
	}
	
	return newName;
}
//-------------------------------------------
