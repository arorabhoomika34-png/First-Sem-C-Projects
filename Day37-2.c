//Q74: Find the transpose of a matrix.//
#include <stdio.h>
int main(){
    int rows,cols;
    printf("Enter the no. of rows and cols");
    scanf("%d %d",&rows,&cols);
    int matrix[100][100],transpose[100][100];
    printf("Enter the elements");
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            transpose[j][i]=matrix[i][j];
        }
    }
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            printf("%d",transpose[i][j])
        }
        printf("\n");
    }
    return 0;
}