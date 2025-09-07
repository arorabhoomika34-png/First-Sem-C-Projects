//Q37: Write a program to find the LCM of two numbers.//
#include <stdio.h>
int main(){
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    int max = (a > b) ? a : b;
    while (1) {
        if (max % a == 0 && max % b == 0) {
            printf("%d\n", max);
            break;
        }
        max++;
    }

    return 0;
}
