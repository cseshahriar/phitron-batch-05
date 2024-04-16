#include <stdio.h>

int main() {
    // array: multiple value can store, index start from 0
    // data type name[size]; size how much element can store
    int arr[3];
    arr[0] = 100; // assign
    arr[1] = 200; // assign
    arr[2] = 300; // assign
    printf("%d %d %d\n", arr[0], arr[1], arr[2]); // access
    
    return 0;
}