//
//  Problem4.c
//  Project-Euler-C
//
//  Created by Brendan Murrell on 6/30/21.
//

#include <stdio.h>
#include <stdlib.h>

char checkValid(int a, int b) {
    int palindrome = a * b;
    int reverse = 0;

    while (palindrome != 0) {
        int remainder = palindrome % 10;
        reverse = reverse * 10 + remainder;
        palindrome = palindrome / 10;
    }
    return (a * b) == reverse;
}

int main (int argc, char** argv) {
    int largestPalindrome = 0;
    for (int i = 999; i > 99; i--) {
        for(int j = 999; j > 99; j--) {
            if(checkValid(i, j) && i * j > largestPalindrome) {
                largestPalindrome = i * j;
                // Since loop is decrementing, subsequent values of j cannot create a larger palindrome for this value of i
                break;
            }
        }
    }
    printf("%i\n", largestPalindrome);
    return 0;
}
