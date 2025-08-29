//Q17: Write a program to find the roots of a quadratic equation and categorize them.//
#include <stdio.h>
#include <math.h>
int main(){
    float a,b,c,D,r1,r2,realpart,imgpart;
    printf("Enter the values of a,b,c: ");
    scanf("%f %f %f",&a,&b,&c);
    D = b*b-4*a*c;
    if(D>0){
        r1= (-b + sqrt(D))/2*a;
        r2= (-b - sqrt(D))/2*a;
        printf("Roots are real and distinct\n");
        printf("r1 is '%f' \n ,r2 is '%f'\n",r1,r2);
    }
    else if(D==0){
        r1=r2= (-b)/(2*a);
        printf("Roots are real and equal\n");
        printf("r1=r2 is '%f'\n",r1,r2);
    }
    else{
        realpart= (-b)/2*a , imgpart= sqrt(-D)/2*a;
        printf("Roots are complex");
    }
    return 0;
}