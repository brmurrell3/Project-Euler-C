//
//  Problem5.c
//  Project-Euler-C
//
//  Created by Brendan Murrell on 7/1/21.
//

#include <stdio.h>
#include <stdbool.h>

char isDiv(long a) {
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
    bool flag = isDiv(smallestNum);
    
    // Loop bypasses checks for mod 2, 4, 5, 10 and 20 by incrimenting by 20
    while (!flag) {
        smallestNum += 20;
        flag = isDiv(smallestNum);
    }
    printf("%i\n", smallestNum);
    return 0;
}

