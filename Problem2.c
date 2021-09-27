//
//  Problem2.c
//  Project-Euler-C
//
//  Created by Brendan Murrell on 6/30/21.
//

#include <stdio.h>
#include <stdlib.h>

#define isEven 0b1
int main (int argc, char** argv) {
    int sum = 0;
    int temp = 0;
    int t1 = 1;
    int t2 = 2;

    // Loop while Nth fib number is less than 4 million
    while (t1 < 4000000){
        
        // If Nth fib number is even, sum it
        if(!(t1 & isEven)){
            sum += t1;
        }
        
        // Calculate next fib number
        temp = t1 + t2;
        t1 = t2;
        t2 = temp;
    }
    printf("%i\n", sum);
    return 0;
}
