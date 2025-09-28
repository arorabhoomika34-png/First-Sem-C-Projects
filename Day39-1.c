//Q77: Check if the elements on the diagonal of a matrix are distinct.//
#include <stdio.h>
int main(){
    int rows,cols,isdistinct;
    printf("Enter the number of rows and cols: ");
    scanf("%d %d",&rows,&cols);
    int matrix[rows][cols];
    printf("Enter the elements: ");
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    int diagonal[rows<cols?rows:cols];
    int k=0;
    for(int i=0;i<rows && i<cols;i++){
        diagonal[k++]=matrix[i][i];
    }
    int isdistict=1;
    for(int i=0;i<k;i++){
        for(int j=i+1;j<k;j++){
            if(diagonal[i]==diagonal[j]){
               int isdistinct=0;
                break;
            }
        }
        if(! isdistinct) break;
    }
    if(isdistinct=1){
        printf("True\n");
    }
    else{
        printf("False\n");
    }
    return 0;
}