#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int x, part=0;
    scanf("%d", &x);
    part = x / 5;
    printf("%d %d\n", part * 4, part);
    return 0;
}
