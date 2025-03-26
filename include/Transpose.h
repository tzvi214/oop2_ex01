#include "SqrMatrix.h"
#include "operation.h"
#include "string"


class Transpose : public Operation
{
public:
	Transpose() = default;
	~Transpose() = default;
	virtual SqrMatrix calc(const SqrMatrix);
	virtual void print() const { std::cout << m_name << std::endl ; }
private:
	std::string m_name{ "Transpose" };

};