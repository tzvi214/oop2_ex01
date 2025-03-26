#pragma once
#include "SqrMatrix.h"
#include <string>
using std::string;
using std::cout;

class Operation
{
public:
	 Operation(string);
	virtual ~Operation() = default;
	virtual SqrMatrix calc(const SqrMatrix) { return SqrMatrix{}; };
	virtual SqrMatrix calc(const SqrMatrix, const SqrMatrix) { return SqrMatrix{}; };

	virtual void printName() const { cout << m_name; }; // print the name of tha class (virtual).
	virtual string getName() const { return m_name; }; // return the name of the class (virtual).
protected:
	string m_name;

};