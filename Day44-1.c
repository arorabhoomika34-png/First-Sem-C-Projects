// Q87: Count spaces, digits, and special characters in a string.//
#include <stdio.h>
int main()
{
    char str[100];
    int spaces = 0, digits = 0, special = 0;
    printf("Enter a string: ");
    scanf("%[^\n]s", str);
    for (int i = 0; str[i] != 0; i++)
    {
        char ch = str[i];
        if (ch >= '0' && ch <= '9')
        {
            digits++;
        }
        else if (ch == ' ')
        {
            spaces++;
        }
        else if (!((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')))
        {
            special++;
        }
    }
    printf("spaces=%d,digits=%d,special=%d\n", spaces, digits, special);
    return 0;
}