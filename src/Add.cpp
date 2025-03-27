#include "Add.h"

Add::Add(std::shared_ptr<Operation> aptr, std::shared_ptr<Operation> bptr)
	:Operation(createName(aptr, bptr), (aptr->getMatrixRequired() + bptr->getMatrixRequired())), m_ptr1{aptr}, m_ptr2{bptr}	
{
	m_ptr1->dountPrintName();
	m_ptr2->dountPrintName();
}

SqrMatrix Add::calc(int sizeOfTheMatrixes)
{
	if (m_need2print) {
		Operation::printName();
		cout << "\nPlease enter " << m_matrixRequired << " matrices:" << endl;
	}

	return m_ptr1->calc(sizeOfTheMatrixes) + m_ptr2->calc(sizeOfTheMatrixes);
}


//-------------------------------------------
std::string Add::createName(std::shared_ptr<Operation> aptr, std::shared_ptr<Operation> bptr)
{
	//if (m_matrixRequired > 2) {
	//	return  (std::string {"(" + aptr->getName() + " + " + bptr->getName() + ")"} );
	//}
	//
	//return	(std::string { aptr->getName() + " + " + bptr->getName() });
	////

	return ((aptr->getMatrixRequired() + bptr->getMatrixRequired()) > 2) ?
		(std::string{ "(" + aptr->getName() + " + " + bptr->getName() + ")" }):
		(std::string{ aptr->getName() + " + " + bptr->getName() });
}
//-------------------------------------------
