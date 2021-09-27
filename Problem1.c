//
//  Problem1.c
//  Project-Euler-C
//
//  Created by Brendan Murrell on 6/17/21.
//

#include <stdio.h>

int main (int argc, char** argv) {
    // Sum variable
    int sum = 0;
    
    // Loop over all values from 0 to 1000 and sum if 5 or 3 is a factor
    for (int i = 0; i < 1000; ++i) {
        if (i % 5 == 0) {
            sum += i;
        } else if (i % 3 == 0) {
            sum += i;
        }
    }
    printf("%d\n", sum);
    return 0;
}
