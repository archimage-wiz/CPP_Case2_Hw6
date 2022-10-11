#include <iostream>
#include "functions/functions.h"


int main() { setlocale(LC_ALL, "Ru");

    do {
        int num1, num2, op;
        std::cout << "Введите первое число: ";
        std::cin >> num1;
        std::cout << "Введите второе число: ";
        std::cin >> num2;
        std::cout << "Выберите операцию (1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";
        std::cin >> op;
        switch (op) {
        case 1:
            std::cout << num1 << " + " << num2 << " = " << sumx(num1, num2) << std::endl;
            break;
        case 2:
            std::cout << num1 << " - " << num2 << " = " << subx(num1, num2) << std::endl;
            break;
        case 3:
            std::cout << num1 << " * " << num2 << " = " << mulx(num1, num2) << std::endl;
            break;
        case 4:
            std::cout << num1 << " / " << num2 << " = " << divx(num1, num2) << std::endl;
            break;
        case 5:
            std::cout << num1 << " в степени " << num2 << " = " << powx(num1, num2) << std::endl;
            break;
        }
    } while (true);
    
    return 0;
}
