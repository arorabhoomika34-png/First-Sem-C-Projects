//Q13: Write a program to input a year and check whether it is a leap year or not using conditional statement//
#include <stdio.h>
int main(){
    int year;
    printf("Enter a year\n");
    scanf("%d",&year);
    if((year%400==0)||(year%4==0&&year%100!=0)){
        printf("This is a leap year");
    }
    else{
        printf("This is not a leap year");
    }
    return 0;
} 