#include <stdio.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M);   
    int matrix[N][M];
 
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int last_row = N - 1;
    int last_col = M - 1;

    // print last row
    for (int i = 0; i < M; i++) {
        printf("%d ", matrix[last_row][i]);
    }
    printf("\n");
    // print last col
    for (int i = 0; i < N; i++) {
        printf("%d ", matrix[i][last_col]);
    }
    return 0;
}