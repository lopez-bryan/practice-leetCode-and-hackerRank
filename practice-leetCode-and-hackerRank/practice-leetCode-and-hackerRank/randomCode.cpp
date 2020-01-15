//
//  randomCode.cpp
//  practice-leetCode-and-hackerRank
//
//  Created by Bryan Lopez on 1/14/20.
//  Copyright © 2020 Lopez Bryan. All rights reserved.
//

#include "randomCode.h"

// This function will reverse an integer passed through the parameters
int RandomCode::reverseInt(int num) {
    // Used to store the new number
    int sum = 0;
    
    // While num is not down to zero
    while (num > 0) {
        // By multiplying the sum by 10, we move the decimal over one place. Then we add that to the
        // last number being passed in (num in this case). We get that last number by frabbing it using the
        // modulo
        sum = (sum * 10) + (num % 10);
        // Now we just cut the last number off one by one by dividing it by 10
        num = num / 10;
    }
    return sum;
}

