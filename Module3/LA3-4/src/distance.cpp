
#include "distance.h"

void Distance::ShowDist() const
{
    std::cout << feet() << "\' " << inches() << "\"" << std::endl;
}

Distance::Distance(const Distance& rhs) // Copy Constructor
{
    std::cout << "Copy contructor invoked" << std::endl;
    feet_ = rhs.feet_;
    inches_ = rhs.inches_;
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

Distance Distance::operator = (Distance& rhs)
{
    std::cout << "Assignment operator invoked" << std::endl;

    feet_ = rhs.feet_;
    inches_ = rhs.inches_;

    return Distance(feet_, inches_);
}

//friend of the class but not a member directly.
Distance operator - (Distance lhs, Distance rhs) 
{
    float rhsInches = rhs.inches_ + (rhs.feet_ * 12.0);

    float lhsInches = lhs.inches_ + (lhs.feet_ * 12.0);

    float temp = lhsInches - rhsInches;

    float inches = fmod(temp, 12.0);

    int feet = temp / 12; 

    return Distance(feet, inches);
}

bool Distance::operator < (Distance rhs) const
{
    if (feet_ < rhs.feet_ )
    {
        return true;
    }
    else
    {
        return (((feet_* 12.0) + inches_) < ((rhs.feet_ * 12.0) + rhs.inches_) );
    }
}

bool Distance::operator > (Distance rhs) const
{
    if (feet_ > rhs.feet_ )
    {
        return true;
    }
    else
    {
        return (((feet_* 12.0) + inches_) > ((rhs.feet_ * 12.0) + rhs.inches_) );
    }
}

bool Distance::operator == (Distance rhs) const
{
    return (((feet_* 12.0) + inches_) == ((rhs.feet_ * 12.0) + rhs.inches_) );
}

bool Distance::operator != (Distance rhs) const
{
    return (((feet_* 12.0) + inches_) != ((rhs.feet_ * 12.0) + rhs.inches_) );
}


std::ostream& operator <<(std::ostream& os, const Distance& distance)
{
    //Do Not include an endline character. 
    os << distance.feet_ << "ft " << distance.inches_ << "in " ;
    return os;
}

void Distance::update_distance(int ft, float in)
{
    set_feet(ft);
    set_inches(in);
}

