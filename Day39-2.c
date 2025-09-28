//Q78: Find the sum of main diagonal elements for a square matrix.//
#include <stdio.h>
int main(){
    int rows,cols;
    printf("Enter the no. of rows and cols: ");
    scanf("%d %d",&rows,&cols);
    int matrix[rows][cols];
    printf("Enter the elements: ");
    for(int i=0;i<rows;i++){
       for(int j=0;j<cols;j++){
        scanf("%d",&matrix[i][j]);
       } 
    }
    int sum=0;
    for(int i=0;i<rows && i<cols;i++){
        sum+=matrix[i][i];
    }
    printf("%d\n",sum);
    return 0;
}