#include "SqrMatrix.h"

SqrMatrix::SqrMatrix(int size) : m_size(size), m_matrix(size, vector<MyType>(size, 0)) //Initialize the matrix to the value 0
{
}

ostream& operator<<(ostream& os, const SqrMatrix& matrix)
{
	for (int i = 0; i < matrix.m_size; i++)
	{
		for (int j = 0; j < matrix.m_size; j++)
		{
			os << matrix.m_matrix[i][j] << " ";
		}
		os << endl;
	}

	return os;
}

istream& operator>>(istream& is, SqrMatrix& matrix)
{
	for (int i = 0; i < matrix.m_size; i++)
	{
		for (int j = 0; j < matrix.m_size; j++)
		{
			is >> matrix.m_matrix[i][j];
		}
	}

	return is;
}