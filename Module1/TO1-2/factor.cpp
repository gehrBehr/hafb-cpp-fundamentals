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