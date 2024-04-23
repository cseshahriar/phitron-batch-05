#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    scanf("%d", &n);

    int a[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int minimum = INT_MAX, min_position=0, max_position=0, maximum = 0;   
    for(int i = 0; i < n; i++) {
        // min
        if(a[i] < minimum) {
            minimum = a[i];
            min_position = i;
        }

        // max
        if(a[i] > maximum) {
            maximum = a[i];
            max_position = i;
        }
            
    }

    int temp = a[max_position];
    a[max_position] = a[min_position];
    a[min_position] = temp;
    
    for(int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}