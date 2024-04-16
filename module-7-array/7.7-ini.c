#include <stdio.h>

int main() {
    // int arr[] = {2, 5, 6, 7, 3};
    int arr[5] = {2}; // all element 2
    for(int j = 0; j < 5; j++) {
        printf("arr[%d] = %d\n", j, arr[j]);
    }
    return 0;
}