//Q31: Write a program to check a number is Armstrong.//
#include <stdio.h>
int main(){
    int n,originalnum,result=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    originalnum=n;
    while(originalnum!=0){
       int r=originalnum%10; 
       result+=r*r*r;
       originalnum=originalnum/10;
    }
    if(result==n){
        printf("Number is armstrong");
    }
    else{
        printf("Number is not armstrong");
    }
    return 0;

}
