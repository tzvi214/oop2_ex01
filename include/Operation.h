#pragma once
#include "SqrMatrix.h"
#include <string>
using std::string;
using std::cout;
using std::endl;
class Operation
{
public:
	 Operation(string, int);
	virtual ~Operation() = default;
	virtual SqrMatrix calc(int) { return SqrMatrix{}; }; 
	virtual int getMatrixRequired() const { return m_matrixRequired; }; // return the number of matrix required for the operation (virtual).

	virtual void printName() const {
		if(m_need2print) cout << m_name << endl;}; // print the name of tha class (virtual).
		
	 string getName() const { return m_name; }; // return the name of the class (virtual).
	 virtual void  dountPrintName() { m_need2print = false; }
protected:
	string m_name;
	int m_matrixRequired;
	bool m_need2print = true;
};