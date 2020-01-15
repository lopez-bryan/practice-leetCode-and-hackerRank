//
//  randomCode.cpp
//  practice-leetCode-and-hackerRank
//
//  Created by Bryan Lopez on 1/14/20.
//  Copyright © 2020 Lopez Bryan. All rights reserved.
//

#include <iostream>
#include "randomCode.h"
#include <cstdlib>

// This function will reverse an integer passed through the parameters. This does not pass the leetCode answers.
// The code for leetCode needs to have a long to handle the buffer overflow. I tried to add some restrictions,
// but the asnwers in leetCode don't recognize them.
int RandomCode::reverseInt(int num) {
    // Used to store the new number
    int sum = 0;
    int flag = 0;
    int currentDigit = 0;
    
    // First check and see if the input is negative or not. If it is, flag it and then make it positive
    // using the absolut value function in cstlib header or cmath heading if a decimal
    if (num < 0) {
        flag = 1;
        num = abs(num);
    }
    int previousNum = 0;
        
        // While num is not down to zero
        while (num > 0) {
            // By multiplying the sum by 10, we move the decimal over one place. Then we add that to the
            // last number being passed in (num in this case). We get that last number by frabbing it using the
            // modulo.
            
            currentDigit = num % 10;
            sum = (sum * 10) + currentDigit;
            
            // Checking for buffer overflow. The value of the previous and current should be the same for their to
            // be no problem.
            if ((sum - currentDigit) / 10 != previousNum)
            {
                return -1;
            }
            else {
                previousNum = sum;
                // Now we just cut the last number off one by one by dividing it by 10.
                num = num / 10;
            }
        }
        // If we flagged it, we need to change it back to a negative number.
        if (flag == 1) {
            sum *= -1;
        }
    return sum;
}

