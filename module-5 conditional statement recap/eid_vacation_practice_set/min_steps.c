#include <stdio.h>

int main() {
    long int x;
    scanf("%ld", &x);
    int steps = 0;

    // While there's distance remaining
    while (x > 0) {
        // If x is greater than or equal to 3, make a step of size 3
        if (x >= 3) {
            x -= 3; // 1 stem and x size decrement 3
        }
        // If x is greater than or equal to 2, make a step of size 2
        else if (x >= 2) {
            x -= 2;
        }
        // If x is 1 or less, make a step of size 1
        else {
            x -= 1;
        }
        // Increment the steps counter
        steps++;
    }

    // Print the number of steps
    printf("%d\n", steps);

    return 0;
}