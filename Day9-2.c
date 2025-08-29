//Q18: Write a program to assign grades based on a percentage input.//
#include <stdio.h>
int main(){
    int p ;
    printf("Enter your percentage: ");
    scanf("%d",&p);
    if(p>=90){
        printf("Grade A");
    }
    else if(p>=80 && p<=89){
        printf("Grade B");
    }
    else if(p>=70 && p<=79){
        printf("Grade C");
    }
    else if(p>=60 && p<=69){
        printf("Grade D");
    }
    else if(p>=50 && p<=59){
        printf("Grade E");
    }
    else{
        printf("Fail");
    }
    return 0;
}
