#include "SqrMatrix.h"
#include <iostream>

int main() {
    int size = 3;
    SqrMatrix mat(size);

    std::cout << "Enter a " << size << " x " << size << " matrix:" << std::endl;
    std::cin >> mat;

    std::cout << "Original matrix:" << std::endl << mat << std::endl;

    mat.transpose();

    std::cout << "Transposed matrix:" << std::endl << mat << std::endl;

    return 0;
}
