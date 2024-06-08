#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int x, y, half;
    scanf("%d %d", &x, &y);
    half = (x-y) / 2;
    printf("%d %d\n", half+y, half);
    return 0;
}
