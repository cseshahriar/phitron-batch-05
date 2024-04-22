#include <stdio.h>

int main() {
    int a[5];
    printf("%ld\n", sizeof(a)); // 20 byte

    printf("%d", sizeof(int)); // byte byte


    // array size
    int arr_size = sizeof(a) / sizeof(int); // 4 means int array
    printf("%d\n", arr_size); // array size
    return 0;
}