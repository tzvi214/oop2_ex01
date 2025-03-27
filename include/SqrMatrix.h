#pragma once
#include <iostream>
#include <vector>

using MyType = int;
using std::vector;
using std::ostream;
using std::istream;
using std::cout;
using std::cin;
using std::endl;

class SqrMatrix
{
public:
	SqrMatrix(int =0);
	friend ostream& operator<< (ostream&, const SqrMatrix&);
	friend istream& operator>> (istream&, SqrMatrix&);
	SqrMatrix operator+(const SqrMatrix&) const;
	SqrMatrix& operator=(const SqrMatrix&);
	SqrMatrix& scalar(int);
    SqrMatrix& transpose();
private:
	int m_size;
	vector < vector <MyType>> m_matrix;
};


// operator<< :
// The function definition is "freind" because the function "operator<<" is a function of the "ostream" class and not of the
// "SqrMatrix" class!. Therefore, we allow the "ostream" class to access private variables of the "SrqrMatrix" class by defining
// the function "freind".