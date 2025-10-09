//Q23: Write a program to calculate a library fine based on late days.//
#include <stdio.h>
int main(){
    int days;
    printf("Enter the number of late days: ");
    scanf("%d",&days);
    if(days<=0){
        printf("No fine");
    }
    else if(days<=5){
         int Fine=days*1;
        printf("Total fine is '%d'",Fine);
    }
    else if(days<=10){
        int Fine=days*2;
        printf("Total fine is '%d'",Fine);
    }
    else if(days<=15){
        int Fine=days*3;
        printf("Total fine is '%d'",Fine);
    } 
    else{
        printf("Membership Cancelled");
    }  
    return 0;
}



