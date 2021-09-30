//
//  Problem7.c
//  Project-Euler-C
//
//  Created by Brendan Murrell on 9/28/21.
//

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

/*
int fastUpperSqrt(int n, int candidateRoot) {

}
*/

bool isPrime(int n) {
    if (n & 0b1) {
        return false;
    }
    // Only need to check through sqrt(n) since any potential pairs of factors must have one factor <= sqrt(n)
    for (int i = 3; i < sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}
int main (int argc, char** argv) {
    // 10001 * log(10001) = 400,008
    // https://en.wikipedia.org/wiki/Sieve_of_Eratosthenes (Sieve of Eratosthenes)
    int primes[400009] = {};
    
    // Mark 0 and 1 as not prime
    primes[0] = 1;
    primes[1] = 1;
    
    for (int i = 2; i < sqrt(400009); ++i) {
        if (primes[i] == 0) {
            if (isPrime(primes[i])) {
                for (int j = 2; i * j < 400009; ++i) {
                    primes[i*j] = 1;
                }
            } else {
                primes[i] = 1;
            }
            
        }
    }
    
    int temp = 0;
    while (temp < 10001) {
        if (primes[temp] == 0) {
            ++temp;
        }
    }
    printf("%i\n", temp);
    return 0;
}
