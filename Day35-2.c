//Q70: Rotate an array to the right by k positions.//
#include <stdio.h>
int main(){
   int n,i,arr[n],k;
   printf("Enter size of the array");
   scanf("%d",&n);
   printf("Enter the elements");
   for(i=0;i<n;i++){
      scanf("%d",&arr[i]);
   }scanf("%d",&k);

    k = k % n; 
    for(int j=0;j<k;j++) {
       int  temp = arr[n-1];              
        for(i=n-1;i>0;i--)            
            arr[i] = arr[i-1];
        arr[0] = temp;                
    }

    for(i=0;i<n;i++) {
        printf("%d ", arr[i]);
    }
   return 0;
} 
    
