#include "Comp.h"


Comp::Comp(std::shared_ptr<Operation> aptr, std::shared_ptr<Operation> bptr)
	:Operation(createName(aptr, bptr), (aptr->getMatrixRequired()  + bptr->getMatrixRequired() -1)),
	m_ptr1{ aptr }, m_ptr2{ bptr }
{ }

//-------------------------------------------
SqrMatrix Comp::calc(std::vector<SqrMatrix> op)
{
	int splitIndex = m_ptr1->getMatrixRequired();
	std::vector<SqrMatrix> a(op.begin(), op.begin() + splitIndex);
	std::vector<SqrMatrix> b(op.begin() + splitIndex, op.end());
	auto temp = m_ptr1->calc(a);
	b.insert(b.begin(), temp);
	return m_ptr2->calc(b);
	
}
//-------------------------------------------
std::string Comp::createName(std::shared_ptr<Operation> aptr, std::shared_ptr<Operation> bptr)
{
	std::string newName;
	if (aptr->getMatrixRequired() % 2 == 0 && bptr->getMatrixRequired() % 2 == 0)
		newName = std::string{ "( " + aptr->getName() + " ) -> (" + bptr->getName() + " )" };
	else if (aptr->getMatrixRequired() % 2 == 0) {
		newName = std::string{ "( " + aptr->getName() + " ) -> " + bptr->getName() };
	}
	else if (bptr->getMatrixRequired() % 2 == 0) {
		newName = std::string{ aptr->getName() + " -> ( " + bptr->getName() + " )" };
	}
	else {
		newName = std::string{ aptr->getName() + " -> " + bptr->getName() };
	}
	
	return newName;


}
//-------------------------------------------
