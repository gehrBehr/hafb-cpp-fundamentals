// countpp3.cpp
// increment counter variable with ++ operator
// uses unnamed temporary object

#include "distance.h"

void Distance::ShowDist() const
{
    std::cout << feet() << "\'- " << inches() << "\"" << std::endl;
}

Distance Distance::operator + (Distance rhs) const
{
    int feet = feet_ + rhs.feet_;
    float inches = inches_ + rhs.inches_;

    feet += (inches / 12); 
    inches = fmod(inches, 12.0);

    Distance temp(feet, inches);
    return temp;
}

std::ostream& operator <<(std::ostream& os, const Distance& distance)
{
    //Do Not include an endline character. 
    os << "feet: " << distance.feet_ << " inches: " << distance.inches_;
    return os;
}