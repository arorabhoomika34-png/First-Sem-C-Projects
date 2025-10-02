// Q86: Check if a string is a palindrome.//
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100],rev[100];
    printf("Enter a string: ");
    scanf("%s", &str);
    strcpy(rev,str);
    strrev(rev);
    if (strcmp(str,rev)==0)
    {
        printf("string is a palindrome");
    }
    else
    {
        printf("string is not a palindrome");
    }
    return 0;
}