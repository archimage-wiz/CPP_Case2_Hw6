
#include "classes.h"

    Quadrangle::Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D) : _a(a), _b(b), _c(c), _d(d), _A(A), _B(B), _C(C), _D(D), Figure(4) { 
        x_name = "Четырехугольник";
    }
    void Quadrangle::print_info() {
        std::cout << x_name << std::endl;
        std::cout << "Стороны:";
        std::cout << " a=" << _a << " b=" << _b << " c=" << _c << " d=" << _d << std::endl;
        std::cout << "Углы:";
        std::cout << " A=" << _A << " B=" << _B << " C=" << _C << " D=" << _D << std::endl;
    }
