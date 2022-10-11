#include <string>

#pragma once

class Figure {

private:
    int x_sides_count = 0;

protected:
    std::string x_name;
    Figure(int sides_count);

public:
    virtual void print_info();
    virtual int get_sides_count();
    virtual std::string get_name();

    Figure();

};

