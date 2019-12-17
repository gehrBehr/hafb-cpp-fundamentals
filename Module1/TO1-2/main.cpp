/**
 * @file main.cpp
 * @author Adam G.
 * @brief makefile practice
 * @version 0.1
 * @date 2019-12-17
 * 
 * @copyright Copyright (c) 2019
 * 
 */
#include "factor.h"

/**
 * @brief Only the driver function. Remember that main should not 
 * have any logic, only function calls or variable definitions.
 * 
 * @return int 
 */
int main()
{
    FactorMod3 ();
    FactorModX(7);
    FactorModXRange(7, 70);

    return 0;
}