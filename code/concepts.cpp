#include <conceptslib/concepts.hpp>

struct MeshType { };

REQUIREMENT VectorFieldReq {
    template<class T>
    auto REQUIRES(T&& t) -> decltype(concepts::valid_expr(
        t.mesh,
        concepts::valid_if<concepts::Same<decltype(t.mesh), MeshType>>()
    ));
};

template<class T>
CONCEPT IsVectorField = concepts::requires_<VectorFieldReq, T>;

struct NotVectorField { double mesh; };
struct VectorField { MeshType mesh; };

int main(){ // No hard errors
    static_assert(!IsVectorField<int>);            // has no mesh member
    static_assert(!IsVectorField<NotVectorField>); // mesh is not of MeshType
    static_assert(IsVectorField<VectorField>);     // mesh is of MeshType
}
