//Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths//
#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter the values of a,b,c: ");
    scanf("%d %d %d",&a,&b,&c);
    if(a==b && b==c){
        printf("Equileteral triangle");
    }
    else if(a==b || b==c || c==a){
        printf("Isosceles triangle");
    }
    else{
        printf("Scalene triangle");
    }
    return 0;
}