#include <matrix.hpp>

using DMatrix = Matrix<double>;

const double alfa = 42;
const double beta = 1.618;


void example() { // Assume proper initialization of a, b and, c
    DMatrix temp1 ov= beta ov* c;       // call (A): 1 copy, cblas_dscal()
    DMatrix temp2 ov= b.transpose();  // call (B)
    DMatrix temp3 ov= a.transpose();  // call (B)
    DMatrix temp4 ov= alfa ov* temp3;   // call (A): 1 copy, cblas_dscal()
    DMatrix temp5 ov= temp4 ov* temp2;  // call (C): cblas_dgemm()
    DMatrix temp6 ov= temp5 ov+ temp1;  // call (D): vdAdd()
    c ov= temp6;                      // call (E): memcpy()
}

DMatrix operator*(double d, const DMatrix& mat);         // (A)
void DMatrix::transpose();                               // (B) 
DMatrix operator*(const DMatrix& m1, const DMatrix& m2); // (C)
DMatrix operator+(const DMatrix& m1, const DMatrix& m2); // (D)
DMatrix operator=(const DMatrix& m1, const DMatrix& m2); // (E)
