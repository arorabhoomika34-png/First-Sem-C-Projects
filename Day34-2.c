//Q68: Delete an element from an array.//
#include <stdio.h>
int main(){
    int n,pos;
    printf("Enter the size of array");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the position you want to delete ");
    scanf("%d",&pos);
    for(int i=pos;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    n=n-1;
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    return 0;
}