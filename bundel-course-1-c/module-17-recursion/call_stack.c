#include <stdio.h>
// call stack which function when call
void world() {
    printf("World started\n");
    printf("World end\n");
}

void hello() {
    printf("Hello started\n");
    world();
    printf("Hello end\n");
}

int main() {
    printf("main stated\n");
    hello();
    printf("main end\n");
    return 0;
}