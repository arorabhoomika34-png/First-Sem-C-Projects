//Q72: Find the sum of all elements in a matrix.//
#include <stdio.h>
int main(){
    int rows,cols;
    printf("Enter the no. of rows and cols");
    scanf("%d %d",&rows,&cols);
    int matrix[rows][cols];
    int sum=0;
    printf("Enter the elements of matrix");
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            scanf("%d",&matrix[i][j]);
            sum=matrix[i][j]+sum;
        }
    }
            printf("%d",sum);
    return 0;
}    
