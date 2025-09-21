//Q64: Find the digit that occurs the most times in an integer number.//
#include <stdio.h>
#include <string.h>
int main(){
    long long num;
    int digit,i,max=0,result=0;
    char count[10]=0;
    scanf("%d",&num);
    while(num>0){    
        digit=num%10;
        count[digit]++;
        num/=10;
    }
    for(i=0;i<10;i++){
        if(count[i]>max){
            max=count[i];
            result=i;
        }
    }    
        printf("Result is %d\n",result);
    
    return 0;
}
