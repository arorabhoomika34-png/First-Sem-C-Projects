//Q63: Merge two arrays.//
#include <stdio.h>
#include <string.h>
int main(){
    char arr1[100],arr2[100];
    printf("Enter the two strings you want to combine\n");
    scanf("%s %s",&arr1,&arr2);
    strcat(arr1,arr2);
    printf(" final string is %s\n",arr1);
    return 0;
}
