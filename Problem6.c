//
//  Problem6.c
//  Project-Euler-C
//
//  Created by Brendan Murrell on 9/27/21.
//

#include <stdio.h>

int main (int argc, char** argv) {
    
    unsigned long sum = 0;
    unsigned long squares = 0;
    
    // Sum up 1 to 100 and 1^2 to 100^2
    for (unsigned long i = 1; i <= 100; ++i) {
        sum += i;
        squares += (i * i);
    }
    printf("%lu\n", ((sum * sum) - squares));
    return 0;
}
