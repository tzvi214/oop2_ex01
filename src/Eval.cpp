#include "Eval.h"


Eval::Eval()
{}	
//-------------------------------------------
void Eval::calculate(std::shared_ptr<Operation> op, int size)
{
	
	std::vector<SqrMatrix> matrices = inputMatrices(op, size);
	cout << endl << op->getName();
	for (auto& matrix : matrices)
	{
		cout <<" (\n" << matrix << ")";
	}
	cout << " = \n" << op->calc(matrices) << endl;
	
}
//-------------------------------------------
std::vector<SqrMatrix> Eval::inputMatrices(std::shared_ptr<Operation> op, int size) const
{
	if (op->getMatrixRequired() > 1) {
		cout << "\nPlease enter " << op->getMatrixRequired() << " matrices:" << endl;
	}
	std::vector<SqrMatrix> matrices;
	for (int i = 0; i < op->getMatrixRequired(); i++) {
		cout << "\nEnter a " << size << " x " << size << " matrix:" << endl;
		SqrMatrix matrix(size);
		cin >> matrix;
		matrices.push_back(matrix);
	}
	return matrices;
}
