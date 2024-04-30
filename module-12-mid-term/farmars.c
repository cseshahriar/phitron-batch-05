#include <stdio.h>
#include <string.h>

int main() {
    int M1, M2, D, T;
    scanf("%d\n", &T);
    int result[T];
 
    for(int i = 0; i < T; i++) {
        int arr[3];
        for(int j = 0; j < 3; j++) {
            scanf("%d", &arr[j]);
        }

        int M3 = arr[0] + arr[1];
        int new_day = (arr[2] * arr[0]) / M3;
        int reduce_day =  arr[2] - new_day;
        result[i] = reduce_day;
        
    }

    for(int i = 0; i < T; i++) {
        printf("%d\n", result[i]);
    }
    return 0;
}