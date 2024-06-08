#include <stdio.h>

void world() {
    printf("World Started\n");
    printf("World ended\n");
}

void hello() {
    printf("Hello started\n");
    world();
    printf("Hello ended\n");
}

int main() {
    hello();
    printf("end main\n");
    return 0;
}