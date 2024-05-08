#include <stdio.h>

// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/N

int main() {
    int row, col;
    scanf("%d %d", &row, &col);
    int a[row][col], b[row][col], c[row][col];

    // a
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // b
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // sum = a + b
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
           c[i][j] =  a[i][j] + b[i][j];
        }
    }

    // print
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
           printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}