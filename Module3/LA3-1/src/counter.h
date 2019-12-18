

#pragma once
#include <iostream>

class Counter
{
private:
    unsigned int count_;
public:
    Counter() : count_(0){};
    Counter(int value);

    ~Counter(){ /*std::cerr << "Deleted\n";*/}

//setters and getters
    unsigned int count() {return count_;}
    
    void set_count(unsigned int count) {count_ = count;}
    //overload operations
   // void operator ++(){++count_;}
    Counter operator++();
    Counter operator ++(int);
    // Counter operator +=();


};
