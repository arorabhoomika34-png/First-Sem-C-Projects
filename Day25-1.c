//Q49: Write a program to print the following pattern:
//5
//45
//345
//2345
//12345
#include <stdio.h>
int main(){
    int n=5;
    for(int i=0;i<=5;i++){
        for(int j=n-i;j<n;j--){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}
