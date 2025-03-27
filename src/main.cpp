#include "SqrMatrix.h"
#include "Operation.h"
#include "Transpose.h"
#include <iostream>
#include <Scal.h>

int main() {
    int size = 2;
	Scal scal{ 2 };
    std::cout << scal.calc(size);

   /* std::cout << "Enter a " << size << " x " << size << " matrix:" << std::endl;
    std::cin >> mat;

    std::cout << "Original matrix:" << std::endl << mat << std::endl;

    

    std::cout << "Transposed matrix:" << std::endl << mat.transpose() << std::endl;*/

    return 0;
}
