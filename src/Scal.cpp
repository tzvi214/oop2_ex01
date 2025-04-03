#include "Scal.h"

Scal::Scal(int scale)
	:Operation((std::string{"Scal " + std::to_string(scale)}), 1), m_scale{scale}
{}

//----------------------------------------------------
SqrMatrix Scal::calc(std::vector<SqrMatrix> op)
{
	return op.at(0).scalar(m_scale);
}