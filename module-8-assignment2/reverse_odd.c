#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int arr[N];
    int size = N - 1;
    for(int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }      
    for(int i = size; i >= 0; i--) {
        if(i % 2 != 0) {
            printf("%d ", arr[i]);
        }
    }                                                                                                                                                                                                                                                  
    return 0;
}