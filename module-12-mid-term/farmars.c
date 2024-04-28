#include <stdio.h>

int main() {
    int M1, M2, D, T;
    scanf("%d\n", &T);
    int arr[T][3];

    for(int i = 0; i < T; i++) {
        scanf("%d %d %d", &M1, &M2, &D);
        arr[i][0] = M1;
        arr[i][1] = M2;
        arr[i][2] = D;
    }


    for(int i = 0; i < T; i++) {
        int M3 = arr[i][0] + arr[i][1];
        int new_day = (arr[i][2] * arr[i][0]) / M3;
        int reduce_day =  arr[i][2] - new_day;
        printf("%d\n", reduce_day);
    }

    return 0;
}