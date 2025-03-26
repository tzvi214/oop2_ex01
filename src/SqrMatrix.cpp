#include "SqrMatrix.h"

SqrMatrix::SqrMatrix(int size) : m_size(size), m_matrix(size, vector<MyType>(size, 0)) //Initialize the matrix to the value 0
{
}
//----------------------------------------------------
SqrMatrix SqrMatrix::operator+(const SqrMatrix& other) const
{
	SqrMatrix result(m_size);
	for (int i = 0; i < m_size; i++)
	{
		for (int j = 0; j < m_size; j++)
		{
			result.m_matrix[i][j] = m_matrix[i][j] + other.m_matrix[i][j];
		}
	}
	return result;
}

SqrMatrix& SqrMatrix::operator=(const SqrMatrix& other)
{
	if (this != &other)
	{
		m_size = other.m_size;
		m_matrix = other.m_matrix;
	}
	return *this;
	
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