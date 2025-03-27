#include "Add.h"

Add::Add(std::shared_ptr<Operation> aptr, std::shared_ptr<Operation> bptr)
	:Operation(createName(aptr, bptr), (aptr->getMatrixRequired() + bptr->getMatrixRequired())), m_ptr1{aptr}, m_ptr2{bptr}
	
{}

SqrMatrix Add::calc(int sizeOfTheMatrixes)
{
	cout << "Please enter " << m_matrixRequired << " matrices:" << endl;
	return m_ptr1->calc(sizeOfTheMatrixes) + m_ptr2->calc(sizeOfTheMatrixes);
}


//-------------------------------------------
std::string Add::createName(std::shared_ptr<Operation> aptr, std::shared_ptr<Operation> bptr)
{
	std::string name{ aptr->getName() + " + " + bptr->getName() };
	return name;
}
//-------------------------------------------
