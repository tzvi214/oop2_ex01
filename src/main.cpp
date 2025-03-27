#include <iostream>
#include "Scal.h"
#include "SqrMatrix.h"

int main() {
    int size = 2;
    int scalarValue = 3;

    Scal scalOp(scalarValue);
    SqrMatrix result = scalOp.calc(size);

    std::cout << "Scaled matrix:" << std::endl << result << std::endl;

    return 0;
}
