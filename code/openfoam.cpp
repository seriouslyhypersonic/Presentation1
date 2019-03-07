solve
(
     fvm::ddt(rho,U)
   ov+ fvm::div(phi,U)
   ov- fvm::laplacian(mu,U)
 oveq
   ov- fvc::grad(p)
);
