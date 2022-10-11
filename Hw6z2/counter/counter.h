#pragma once


class Counter {

private:

    int counter;

public:

    int get_counter();
    void inc_counter();
    void dec_counter();

    Counter();
    Counter(int counter);
    ~Counter();

};