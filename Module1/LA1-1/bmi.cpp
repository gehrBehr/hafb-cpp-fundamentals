
#include <iostream>
using namespace std;

const float kMetersToInches = 39.37;
const float kKiloToPound = 2.204;
const float kBMIImperial = 703;
const float kLowerNormalBound = 18.5;
const float kLowerOverweightBound = 25;
const float kLowerObeaseBound = 30;
const float kLowerSevereBound = 35;
const float kLowerVeryBound = 40;
const float kMorbidlyObese = 45;





//Calculate the Body max index of the user.
int main()
{
    float meters = 0.0;
    float kilograms = 0.0;
    float bmi = 0.0;
    //BMI = weight(kg)/[height(m)]^2

    cout << "Lets calculate your BMI." << endl;
    cout << "How tall are you in meters? \n >" ;
    cin >> meters;
    
    cout << "How much do you weigh in kilograms? \n >" ;
    cin >> kilograms;

    bmi = kilograms / (meters * meters);

    cout << "Your BMI is: " << bmi << endl;

    //the
    float weight_pounds = kilograms * kKiloToPound;
    float height_inches = meters * kMetersToInches;
    bmi = (weight_pounds * kBMIImperial) / (height_inches * height_inches);
    cout << "Your BMI(imperial) is: " << bmi << endl;

    // let the user know what the number means.
    cout << "You are considered: ";

    if (bmi < kLowerNormalBound)
    {
        cout << "Underweight (less than 18.5)" << endl;
    }
    else if (bmi > kLowerNormalBound &&	bmi < kLowerOverweightBound)
    {
        cout << "Normal (between 18.5 and 24.9)" << endl;
    }
    else if (bmi > kLowerOverweightBound &&	bmi < kLowerObeaseBound)
    {
        cout << "Overweight (between 25 and 30)" << endl;
    }
    else if (bmi > kLowerObeaseBound &&	bmi < kLowerSevereBound)
    {
        cout << "Moderately obese (between 30 and 35)" << endl;
    }
    else if (bmi > kLowerSevereBound &&	bmi < kLowerVeryBound)
    {
        cout << "Severely obese (between 35 and 40)" << endl;
    }
    else if (bmi > kLowerVeryBound &&	bmi < kMorbidlyObese)
    {
        cout << "Very severely obese (between 40 and 45)" << endl;
    }
    else if (bmi > kMorbidlyObese)
    {
        cout << "Morbidly obese (greater than 45)" << endl;
    }  
    else
    {
        cout << "out of range\n";
    }
    

    return 0;
}