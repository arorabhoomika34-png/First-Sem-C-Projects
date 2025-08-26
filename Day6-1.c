//Q11: Write a program to input an integer and check whether it is even or odd using if–else.//
 
 #include <stdio.h>
 int main(){
    int a;
    printf("Enter the value of a\n");
    scanf("%d",&a);
    if(a%2==0){
        printf("The integer a is even");
    }
    else {
        printf("The integer a is odd");
    }
    return 0;
}