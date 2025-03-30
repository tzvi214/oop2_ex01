#include "Eval.h"


Eval::Eval()
{}	
//-------------------------------------------
void Eval::calculate(std::shared_ptr<Operation> op, int size)
{
	//std::cout <<   "the sum  of matrix is:  "<< op->getMatrixRequired() << std::endl;
	if (op->getMatrixRequired() > 1) {
		cout << "\nPlease enter " << op->getMatrixRequired() << " matrices:" << endl;
	}
	std::vector<SqrMatrix> matrices;
	for (int i = 0; i < op->getMatrixRequired(); i++) {
		cout << "Enter a " << size << " x " << size << " matrix:" << endl;
		SqrMatrix matrix(size);
		cin >> matrix;
		matrices.push_back(matrix);
	}
	cout << op->calc(matrices) << endl;
	//cout << op->calc(size) << endl;
}
