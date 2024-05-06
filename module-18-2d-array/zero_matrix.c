#include <stdio.h>

int main() {
    // in math, a matrix is rectangular array or table of numbers or expressions , arranged in row and columns
    // row matrix [a, b c]
    
    //                 a 
    // column matrix [ b ]
    //                 c

    // zero matrix
    // diagonal 
    // scalar 
    // unit
    int row, col;
    scanf("%d %d", &row, &col);
    int a[row][col];
    int elements = row * col;
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
         scanf("%d", &a[i][j]);   
        }
    }

    int cnt = 0;
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            if(a[i][j] == 0) {
                cnt++;
            }  
        }
    }
    if(cnt == elements) {
        printf("zero matrix");
    } else {
        printf("not zero matrix");
    }
    return 0;
}