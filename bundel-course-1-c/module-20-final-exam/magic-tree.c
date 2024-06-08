#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    if(N % 2 != 0) {
        // get size
        int base_size = 5;
        int n_size = 0;
        int size = 0;
        for(int i = 1; i <= N; i = i+2) {
            n_size++;
        }
        size = base_size + n_size;
  
        // upper part
        for(int i = 1; i <= size; i++) {
            for(int s = 0; s < size - i; s++) {
                printf(" ");
            }
            for(int k = 0; k < 2 * i - 1; k++) {
                printf("*");
            }
            printf("\n");
        }

        // lower part
        for(int i = 1; i < 6; i++) {
            for(int s = 0; s < size - n_size; s++) {
                printf(" ");
            }
            for(int k = 0; k < N; k++ ){
                printf("*");
            }
            printf("\n");
            
        }
    }
    return 0;
}