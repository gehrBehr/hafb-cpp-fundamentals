#include "factor.h"

/**
 * @brief Calculate the number or instances by 3 
 * in the range of 1-30
 */
void FactorMod3()
{
    unsigned int count = 0;
    for (unsigned int i = 1; i <= 30; ++i)
    {
        if (i % 3 == 0)
        {
            count++;
        }  
    }
    cout << "Result is: " << count << endl;
}

/**
 * @brief more flexible version of FactorMod3
 * 
 */
void FactorModX(int mod_number)
{
    unsigned int count = 0;
    
    for (unsigned int i = 1; i <= 30; ++i)
    {
        if (i % mod_number == 0)
        {
            count++;
        }  
    }
    cout << "Result is: " << count << endl;

}

/**
 * @brief same but with range.
 * 
 */
void FactorModXRange(int mod_number, int range)
{
    unsigned int count = 0;
    
    for (unsigned int i = 1; i <= range; ++i)
    {
        if (i % mod_number == 0)
        {
            count++;
        }  
    }
    cout << "Result is: " << count << endl;
}
