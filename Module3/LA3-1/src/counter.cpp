#include "counter.h"

    Counter::Counter(int value)
    {
        count_ = value;
    }

    Counter Counter::operator ++()
    {
        return Counter(++count_);
    }

    Counter Counter::operator ++(int)
    {
        return Counter(count_++);
    }

    // Counter Counter::overload +=()
    // {
    //     return Counter(count_+=1);
    // }
