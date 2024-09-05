#include <stdio.h>
// remove from array 
int main() {
    
    int n;
    scanf("%d", &n);
    int arr[n];
    // array push
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int position;
    scanf("%d", &position);
    
    // right shift values
    for(int i = position; i < n -1; i++) {
        arr[i] = arr[i+1];
    }    
    // print array
    for(int i = 0; i < n -1; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}