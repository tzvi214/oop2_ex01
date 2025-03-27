#pragma once
#include "SqrMatrix.h"
#include <string>
using std::string;
using std::cout;

class Operation
{
public:
	 Operation(string, int);
	virtual ~Operation() = default;
	virtual SqrMatrix calc(int) { return SqrMatrix{}; }; 
	virtual int getMatrixRequired() const { return m_matrixRequired; }; // return the number of matrix required for the operation (virtual).

	virtual void printName() const { cout << m_name; }; // print the name of tha class (virtual).
	 string getName() const { return m_name; }; // return the name of the class (virtual).
protected:
	string m_name;
	int m_matrixRequired;
};