

#include "classes.h"


Triangle::Triangle(int a, int b, int c, int A, int B, int C) : _a(a), _b(b), _c(c), _A(A), _B(B), _C(C), Figure(3) {
    x_name = "Треугольник";
}

void Triangle::print_info() {

    std::cout << x_name << std::endl;
    std::cout << "Стороны:";
    std::cout << " a=" << _a << " b=" << _b << " c=" << _c << std::endl;
    std::cout << "Углы:";
    std::cout << " A=" << _A << " B=" << _B << " C=" << _C << std::endl;

}
