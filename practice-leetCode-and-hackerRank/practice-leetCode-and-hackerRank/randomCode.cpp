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

// This function will reverse an integer passed through the parameters. I eventually got this answer from leetCode. 
int RandomCode::reverseInt(int num) {
    // Used to store the new number
    int sum = 0;
    
        
        // While num is not down to zero
        while (num != 0) {
            // By multiplying the sum by 10, we move the decimal over one place. Then we add that to the
            // last number being passed in (num in this case). We get that last number by frabbing it using the
            // modulo.
            
            int remainder = num % 10;
            num = num / 10;
            
            // Checking for buffer overflow. The value of the previous and current should be the same for their to
            // be no problem.
            if (sum > INT_MAX / 10 || (sum == INT_MAX / 10 && remainder > 7)) {
                return 0;
            }
            if (sum < INT_MIN / 10 || (sum == INT_MIN / 10 && remainder < -8)) {
                return 0;
            }
            sum = (sum * 10) + remainder;
        }
             return sum;
}





