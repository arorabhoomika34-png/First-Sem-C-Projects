// Q96: Reverse each word in a sentence without changing the word order.//
#include <stdio.h>
#include <string.h>

void reverseWord(char str[], int start, int end)
{
    while (start < end)
    {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main()
{
    char str[200];
    printf("Enter a sentence: ");
    scanf("%[^\n]", str); 

    int len = strlen(str);
    int start = 0;

    for (int i = 0; i <= len; i++)
    {
        if (str[i] == ' ' || str[i] == '\0')
        {
            reverseWord(str, start, i - 1);
            start = i + 1;
        }
    }

    printf("%s", str);
    return 0;
}
