//Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.//
#include <stdio.h>
int main(){
    int a;
    printf("Enter the value of a\n");
    scanf("%d",&a);
    if(a>0){
        printf("The integer a is positive");
    }
    else{
        if(a<0){
            printf("The integer a is negative");
        }
        else{
            printf("The integer a is zero");
        }
    }
    return 0;
}
