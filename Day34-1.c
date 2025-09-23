//Q67: Insert an element in an array at a given position.//
#include <stdio.h>
int main(){
    int n,pos,elem;
    printf("Enter size of the array");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter the position and the elemenent you want to insert");
    scanf("%d %d",&pos,&elem);
    for(int i=n;i>=pos;i--){
        arr[i+1]=arr[i];
    }
    arr[pos]=elem;
    n++;
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    return 0;
}