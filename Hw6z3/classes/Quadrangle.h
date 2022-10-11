#pragma once

#include "classes.h"

class Quadrangle : public Figure {

protected:
    int _a, _b, _c, _d, _A, _B, _C, _D;

public:
    Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D);
    virtual void print_info() override;
};