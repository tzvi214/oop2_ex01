#pragma once
#include "SqrMatrix.h"
#include <string>
#include <vector>
using std::string;
using std::cout;
using std::endl;
class Operation
{
public:
	 Operation(string, int);
	virtual ~Operation() = default;
	virtual SqrMatrix calc(std::vector<SqrMatrix>) = 0; // pure virtual function to be implemented by derived classes.

	virtual int getMatrixRequired() const { return m_matrixRequired; }; // return the number of matrix required for the operation (virtual).
	 string getName() const { return m_name; }; // return the name of the class
protected:
	string m_name;
	int m_matrixRequired;
	
};