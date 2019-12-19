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

Distance Distance::operator - (Distance rhs) const
{
    //int feet = rhs.feet_;
    float rhsInches = rhs.inches_ + (rhs.feet_ * 12.0);

    float lhsInches = inches_ + (feet_ * 12.0);

    float temp = lhsInches - rhsInches;

    float inches = fmod(temp, 12.0);

    int feet = temp / 12; 

    return Distance(feet, inches);
}

std::ostream& operator <<(std::ostream& os, const Distance& distance)
{
    //Do Not include an endline character. 
    os << "feet: " << distance.feet_ << " inches: " << distance.inches_;
    return os;
}


void update_distance(int ft, float in)
{

}