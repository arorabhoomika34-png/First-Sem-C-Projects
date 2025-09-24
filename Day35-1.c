//Q69: Find the second largest element in an array. //
#include <stdio.h>
int main(){
    int n,i,largest,secondlargest;
    printf("Enter size of the array");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements");
    for( int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    if(arr[0]<arr[1]){
        secondlargest=arr[0];
        largest=arr[1];
    }
    else{
        secondlargest=arr[1];
        largest=arr[0];
    }
    for(i=2;i<n;i++){
        if(arr[i]>largest){
            secondlargest=largest;
            largest=arr[i];
        }
        else if(arr[i]>secondlargest && arr[i]<largest){
            secondlargest=arr[i];
        }
    }
    printf("The second largest number is %d",secondlargest); 
    return 0;
}    