//Q50: Write a program to print the following pattern:
//*****
//  ****
//    ***
//      **
//        * 
#include <stdio.h>
int main(){
   int n=5;
  for(int i=1;i<=5;i++){
    for(int j=0;j<i*2;j++){
      for(int k=5;k<n-i;k--){
        printf("*");
      }
    }
    printf("\n");
  }
  return 0;
}


