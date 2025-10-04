// Q89: Count frequency of a given character in a string.//
#include <stdio.h>
int main()
{
    char str[100], ch;
    int count = 0;
    printf("Enter a string");
    scanf("%s", str);
    printf("Enter a character to find frequency: ");
    scanf("%c", &ch);
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (ch == str[i])
        {
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}