//Q41: Write a program to swap the first and last digit of a number.//
#include <stdio.h>
#include <math.h>

int swapFirstLast(int num) {
    int n = num;
    int firstDigit, lastDigit;
    int digits = 0;

    lastDigit = n % 10;
    while (n != 0) {
        firstDigit = n;
        n = n / 10;
        digits++;
    }
    if (digits == 1) return num;
    int power = pow(10, digits - 1);
    int middle = (num % power) / 10;
    int newNum = lastDigit * power + middle * 10 + firstDigit;

    return newNum;
}

int main() {
    int num;
    scanf("%d", &num);

    int result = swapFirstLast(num);
    printf("%d\n", result);
    return 0;
}    

