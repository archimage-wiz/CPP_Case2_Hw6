#include <string>
#include <iostream>

#pragma once

#include "classes.h"

class Triangle : public Figure {

protected:
    int _a, _b, _c, _A, _B, _C;

public:
    Triangle(int a, int b, int c, int A, int B, int C);
    virtual void print_info() override;

};
