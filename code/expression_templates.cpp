#include <matrix.hpp>

using DMatrix = Matrix<double>;

const double alfa = 42;
const double beta = 1.618;

void example() {
    const std::size_t dim = 100;
    auto a ov= DMatrix::random(dim); // Same for b and c...
    
    MatrixAdd<MatrixScale<double
                         ,MatrixMult<MatrixTranspose<DMatrix>
                                    ,MatrixTranspose<DMatrix>
                                    >
                         >
             ,MatrixScale<double, DMatrix>>
             
}
