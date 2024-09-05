#include <stdio.h>

int main() {
    int n, x;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &x);
    int flag = 0;
    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] + arr[j] == x){
                flag = 1;
            }
        }
    }

    if(flag == 1) {
        printf("YES\n");
    } else {
        printf("NN\n");
    }
    return 0;
}