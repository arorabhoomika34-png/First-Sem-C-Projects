//Q88: Replace spaces with hyphens in a string.//
#include <stdio.h>
int main(){
    char str[100];
    char oldcharacter=' ',newcharacter='_';
    printf("Enter a string: ");
    scanf("%[^\n]s",str);
    for(int i=0;str[i]!=0;i++){
        if(str[i]==oldcharacter){
            str[i]=newcharacter;
        }
    }
    printf("%s\n",str);
    return 0;
}