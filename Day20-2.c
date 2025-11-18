//Q40: Write a program to find the 1’s complement of a binary number and print it.//
#include <stdio.h>

int main() {
    long long n, rev = 0, ones = 0;
    scanf("%lld", &n);
    long long temp = n;
    while (temp > 0) {
        rev = rev * 10 + (temp % 10);
        temp /= 10;
    }
    while (rev > 0) {
        int bit = rev % 10;
        if (bit == 0)
            ones = ones * 10 + 1;
        else
            ones = ones * 10 + 0;

        rev /= 10;
    }

    printf("%lld", ones);
    return 0;
}
