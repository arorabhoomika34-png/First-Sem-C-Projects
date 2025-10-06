// Q93: Check if two strings are anagrams of each other.//
#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100], str2[100];
    int count1[256]={0}, count2[256]={0};
    printf("Enter first string");
    scanf("%s", str1);
    printf("Enter second string");
    scanf("%s", str2);
    if (strlen(str1) != strlen(str2))
    {
        printf("not anagrams");
        return 0;
    }
    for (int i = 0; str1[i] != '\0'; i++)
    {
        count1[(unsigned char)str1[i]]++;
        count2[(unsigned char)str2[i]]++;
    }
    for (int i = 0; i < 256; i++)
    {
        if (count1[i] != count2[i])
        {
            printf("not anagrams");
            return 0;
        }
    }
    printf("Anagrams");
    return 0;
}