//Q60: Count positive, negative, and zero elements in an array.//
#include <stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=o;i<n;i++)[
        scanf("%d",&arr[i]);
    ]
    int positives=0,negatives=0,zeroes=0;
    for(i=0;i<n;i++){
        if(arr[i]>0){
            positives++;
        }
        else if(arr[i]<0){
            negatives++;
        }
        else{
            zeroes++;
        }
    }
    return 0;
}