#include <matrix.hpp>

using DMatrix = Matrix<double>;

const double alfa = 42;
const double beta = 1.618


void example() { // Assume proper initialization of a, b and, c
    DMatrix temp1 ov= beta ov* c;       // call (A)
    DMatrix temp2 ov= b.transpose();  // call (B)
    DMatrix temp3 ov= a.transpose();  // call (B)
    DMatrix temp4 ov= temp3 ov* temp2;  // call (C)
    DMatrix temp5 ov= alfa ov* temp4;   // call (C)
    DMatrix temp6 ov= temp5 ov+ temp1;  // call (D)
    c ov= temp6;                      // call (E)
}

DMatrix operator*(double d, const DMatrix& mat);         // (A)
void DMatrix::transpose();                               // (B) 
DMatrix operator*(const DMatrix& m1, const DMatrix& m2); // (C)
DMatrix operator+(const DMatrix& m1, const DMatrix& m2); // (D)
DMatrix operator=(const DMatrix& m1, const DMatrix& m2); // (E)
