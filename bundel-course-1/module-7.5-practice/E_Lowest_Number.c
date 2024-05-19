#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    // index from start 0, position start 1
    int min = INT_MAX, position;
    for(int i = 0; i < n; i++) {
        if(arr[i] < min) {
            min = arr[i];
            position = i + 1;
        }
    }
    printf("%d %d\n", min, position);
    return 0;
}