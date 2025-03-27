#include "Eval.h"


Eval::Eval()
{}	
//-------------------------------------------
void Eval::calculate(std::shared_ptr<Operation> op, int size)
{
	cout << op->calc(size) << endl;
}
