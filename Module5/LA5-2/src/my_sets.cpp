#include <iostream>
#include <set>


//find(): returns the pposition of the first element equal to the provided value
// you should always compare the value against the end() of the container.

int main()
{
    std::set<int> numbers;
    numbers.insert(10);
    numbers.insert(20);
    numbers.insert(30);
    //search for a value
    