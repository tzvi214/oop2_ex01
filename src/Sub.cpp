#include "Sub.h"

Sub::Sub(std::shared_ptr<Operation> aptr, std::shared_ptr<Operation> bptr)
	:Operation(createName(aptr, bptr), (aptr->getMatrixRequired() + bptr->getMatrixRequired())   ),
	           m_ptr1{ aptr }, m_ptr2{ bptr }
{
	m_ptr1->dountPrintName();
	m_ptr2->dountPrintName();
}
//-------------------------------------------
SqrMatrix Sub::calc(int sizeOfTheMatrixes)
{
	if (m_need2print) {
		Operation::printName();
		cout << "\nPlease enter " << m_matrixRequired << " matrices:" << endl;
	}

	return m_ptr1->calc(sizeOfTheMatrixes) - m_ptr2->calc(sizeOfTheMatrixes);
}
//-------------------------------------------
SqrMatrix Sub::calc(std::vector<SqrMatrix> op)
{
	int splitIndex = m_ptr1->getMatrixRequired();
	std::vector<SqrMatrix> a(op.begin(), op.begin() + splitIndex);
	std::vector<SqrMatrix> b(op.begin() + splitIndex, op.end());

	return m_ptr1->calc(a) - m_ptr2->calc(b);
}

//-------------------------------------------
std::string Sub::createName(std::shared_ptr<Operation> aptr, std::shared_ptr<Operation> bptr)
{
	return ((aptr->getMatrixRequired() + bptr->getMatrixRequired()) > 2) ?
		(std::string{ "(" + aptr->getName() + " - " + bptr->getName() + ")" }) :
		(std::string{ aptr->getName() + " - " + bptr->getName() });
}
