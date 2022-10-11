#include <iostream>
#include <string>
#include "classes/classes.h"

int main() { setlocale(LC_ALL, "Rus"); //system("chcp 1251");

    //Figure fgfg;
    //fgfg.print_info();

    Triangle fig1(10, 20, 30, 50, 60, 70);
    fig1.print_info();
    std::cout << std::endl;

    RightTriangle fig_rt(10, 20, 30, 50, 60);
    fig_rt.print_info();
    std::cout << std::endl;

    IsoscelesTriangle fig_it(10, 20, 50, 60); // a, b, A, B : c = a, C= A
    fig_it.print_info();
    std::cout << std::endl;

    EquilateralTriangle fig_et(30);
    fig_et.print_info();
    std::cout << std::endl;

    Quadrangle fig2(10, 20, 30, 40, 50, 60, 70, 80);
    fig2.print_info();
    std::cout << std::endl;

    Rectangle fig_rect(10, 20);
    fig_rect.print_info();
    std::cout << std::endl;

    Square fig_square(20);
    fig_square.print_info();
    std::cout << std::endl;

    Parallelogram fig_p(20, 30, 30, 40);
    fig_p.print_info();
    std::cout << std::endl;

    Rhomb fig_r(30, 30, 40);
    fig_r.print_info();
    std::cout << std::endl;
    
    return 0;

}
