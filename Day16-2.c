// Q31: Write a program to check a number is pallindrome.//
#include <stdio.h>
int main()
{
    int n, rev = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    int original=n;
    while (n != 0)
    {
        int r = n % 10;
        rev = rev * 10 + r;
        n = n / 10;
    }
    
        if(original=rev) 
        {
            printf("Number is pallindrome");
        }
        else{
           printf("Number is not pallindrome");
        }
    
    return 0;

}
