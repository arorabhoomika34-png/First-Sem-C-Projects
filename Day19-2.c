//Q38: Write a program to find the sum of digits of a number.//
#include <stdio.h>

int main() {
    int num, sum = 0, temp;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;  
    while (temp != 0) {
        sum += temp % 10; 
        temp /= 10;   
    }
    printf("%d\n", sum);

    return 0;
}
