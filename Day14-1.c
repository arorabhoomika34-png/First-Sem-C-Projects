//Q27: Write a program to print the sum of the first n odd numbers.//
#include <stdio.h>
int main(){
    int n,sum;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        sum=i*i;
    }
    printf("Sum of odd numbers=%d",sum);
    return 0;
}