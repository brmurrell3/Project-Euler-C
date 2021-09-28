//
//  Problem5.c
//  Project-Euler-C
//
//  Created by Brendan Murrell on 7/1/21.
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define isEven 0b1

int lcm(int lcmNum, int lastMod) {
    if (lastMod <= 1) {
        return lcmNum;
    }
    if (lcmNum % lastMod == 0) {
        return lcm(lcmNum, lastMod - 1);
    } else {
        return lcm((lcmNum * (lcmNum - 1)), lastMod - 1);
    }
}

char isDiv(long a) {
    // Loop bypasses checks for mod 2, 4, 5, 10 and 20 by incrimenting by 20
    // Other mod operators bypass checks for 3 (12, 15, 18), 6 (12, 18), 7 (14), 8 (16), 9 (18)
    // Compiler optimizes for const mod divisor
    if ((a % 19 != 0) || (a % 18 != 0) || (a % 17 != 0) || (a % 16 != 0) || (a % 15 != 0) ||
        (a % 14 != 0) || (a % 13 != 0) || (a % 12 != 0) || (a % 11 != 0)) {
        return 0;
    }
    return 1;
}

int main (int argc, char** argv) {
    int smallestNum = 20;
    
    while (1) {
        if (isDiv(smallestNum) == 1) {
            break;
        }
        smallestNum += 20;
    }
    printf("%i\n", smallestNum);
    return 0;
}

