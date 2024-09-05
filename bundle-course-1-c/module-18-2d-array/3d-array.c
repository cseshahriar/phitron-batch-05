#include <stdio.h>
// 3d array

int main() {
    int row, col;
    scanf("%d %d", &row, &col)
    int a[2][2][2];

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            for(int k = 0; k < 2; k++) {
                scanf("%d", &a[i][j][k]);
            }
        }
    }

    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 3; j++) {
            for(int k = 0; k < 2; k++) {
                printf("%d", a[i][j][k]);
            }
        }
        printf("\n");
    }
    return 0;
}