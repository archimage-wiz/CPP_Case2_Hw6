
#include "classes.h"

void Figure::print_info() {
    return;
}

int Figure::get_sides_count() {
    return this->x_sides_count;
}

std::string Figure::get_name() {
    return this->x_name;
}


Figure::Figure(int sides_count) {
     x_sides_count = sides_count > 0 ? sides_count : 0;
}

Figure::Figure() : Figure(0) {
    this->x_name = "Фигура";
}
