#include "Scal.h"

Scal::Scal(int scale)
	:Operation((std::string{"Scal" + std::to_string(scale)}), 1), m_scale{scale}
{}
//----------------------------------------------------
SqrMatrix Scal::calc(int size)
{
	Operation::printName();
	cout << "Enter a " << size << " x " << size << " matrix:" << endl;
	SqrMatrix matrix(size);

	cin >> matrix;
	return matrix.scalar(m_scale);
}
//----------------------------------------------------