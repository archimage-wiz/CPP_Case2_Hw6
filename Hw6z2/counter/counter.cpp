#include "counter.h"


int Counter::get_counter() { 
    return counter; 
}

void Counter::inc_counter() {
    this->counter++;
}

void Counter::dec_counter() {
    if (this->counter > 0) {
        this->counter--;
    }
}

Counter::Counter() {
    this->counter = 1;
}
Counter::Counter(int counter) {
    this->counter = counter;
}

Counter::~Counter() { }
