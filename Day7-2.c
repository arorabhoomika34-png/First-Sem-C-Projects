//Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else.//
#include <stdio.h>
int main(){
    char letter;
    printf("Enter a character\n");
    scanf("%c",&letter);
    if(letter=='a'||letter=='e'||letter=='i'||letter=='o'||letter=='u'||letter=='A'||letter=='E'||letter=='I'||letter=='O'||letter=='U'){
        printf("This letter is a vowel");
    }
    else{
        printf("This letter is a consonent");
    }
    return 0;
}

