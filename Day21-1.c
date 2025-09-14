#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum;
    int firstDigit, lastDigit, digits = 0;
    
    // Input the number
    printf("Enter a number: ");
    scanf("%d", &num);
    
    originalNum = num;
    lastDigit = num % 10;

    // Count digits and extract first digit
    int temp = num;
    while (temp >= 10) {
        temp /= 10;
        digits++;
    }
    firstDigit = temp;

    // If number has only one digit, or first == last, no change
    if (originalNum < 10 || firstDigit == lastDigit) {
        printf("Swapped number: %d\n", originalNum);
        return 0;
    }

    // Remove first digit
    int middlePart = (originalNum % (int)pow(10, digits)) / 10;

    // Reconstruct number with swapped digits
    int swapped = lastDigit * (int)pow(10, digits) + middlePart * 10 + firstDigit;

    printf("Swapped number: %d\n", swapped);

    return 0;
}
