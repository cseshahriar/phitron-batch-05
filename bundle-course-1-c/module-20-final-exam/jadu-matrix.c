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
    
    int flag = 1;
    if (N != M) {
        flag = 0;
    }
   
    for (int i = 0; i < N; i++) {
        // primary check 00, 11, 22
        if (matrix[i][i] != 1) {
            flag = 0;
        }

        // secondary check 02, 11, 20
        if (matrix[i][N - 1 - i] != 1) {
            flag = 0;
        }

        // check non-diagonal is not 0
        for (int j = 0; j < M; j++) {
            if ((i != j) && (i + j != N - 1) && (matrix[i][j] != 0)) {
                flag = 0;
            }
        }
    }
    
    if(flag == 1) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    return 0;
}