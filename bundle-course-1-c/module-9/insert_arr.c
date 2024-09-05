#include <stdio.h>
// array insert
int main() {
    
    int n;
    scanf("%d", &n);
    int arr[n+1];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int position, value;
    scanf("%d %d", &position, &value);
    
    // right shift values
    for(int i = n; i >= position + 1; i--) {
        arr[i] = arr[i-1];
    }

    arr[position] = value; // replace
    
    // print array
    for(int i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}