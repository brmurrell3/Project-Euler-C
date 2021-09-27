//
//  Problem3.c
//  Project-Euler-C
//
//  Created by Brendan Murrell on 6/30/21.
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define isEven 0b1

int main (int argc, char** argv) {
    // Find largest prime factor of n
    u_long n = 600851475143;
    u_long maxPrime = 0;
    
    // While 2 is a factor of n, bitshift n by 1 and set maxPrime to 2
    while (!(n & isEven)) {
        maxPrime = 2;
        n >>= 1;
    }
    
    // Reduce number of possible modulus operators by only checking odd i values from 3 to sqrt(n)
    for (int i = 3; i <= sqrt(n); i += 2) {
        while (n % i == 0) {
            maxPrime = i;
            n = n / i;
        }
    }
    
    if (n > 2) {
        maxPrime = n;
    }
    printf("%lu\n", maxPrime);
    return 0;
}
