#include "Scal.h"

Scal::Scal(int scale)
	:Operation("Scal", 1), m_scale{ scale }
{}
//----------------------------------------------------
SqrMatrix Scal::calc(int size)
{
	cout << "Enter a " << size << " x " << size << " matrix:" << endl;
	SqrMatrix matrix(size);

	cin >> matrix;
	return matrix.scalar(m_scale);
}
//----------------------------------------------------