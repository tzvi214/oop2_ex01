#include <iostream>
#include "SqrMatrix.h"
#include "Id.h"

using std::cout;
using std::cin;
using std::endl;

int main()
{
	int size;
	cout << " enter size of MATRIX " << endl;
	cin >> size;
	SqrMatrix matrix(size);
	cout << " enter " << size * size << " value for MATRIX :size " << size << " X " << size << endl;
	cin >> matrix;
	cout << "this MATRIX " << endl;
	cout << matrix;
	return EXIT_SUCCESS;
}