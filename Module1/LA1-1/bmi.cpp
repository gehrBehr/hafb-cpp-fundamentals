
#include <iostream>
using namespace std;

const float kMetersToInches = 39.37;
const float kKiloToPound = 2.204;
const float kBMIImperial = 703;


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



    bmi = kilograms / (meters * meters);



    cout << "You are considered: ";

    if (bmi > 16 &&	bmi < 18.5)
    {
        cout << "Underweight" << endl;
    }
    else if (bmi > 18.5 &&	bmi < 25)
    {
        cout << "Normal" << endl;
    }
    else if (bmi > 25 &&	bmi < 30)
    {
        cout << "Overweight" << endl;
    }
    else if (bmi > 30 &&	bmi < 35)
    {
        cout << "Moderately obese" << endl;
    }
    else if (bmi > 35 &&	bmi < 40)
    {
        cout << "Severely obese" << endl;
    }
    else if (bmi > 40 &&	bmi < 45)
    {
        cout << "Very severely obese" << endl;
    }
    else if (bmi > 50)
    {
        cout << "Morbidly obese" << endl;
    }  


    return 0;
}