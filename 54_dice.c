#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int die1, die2;
    int sum;

    // Seed the random number generator
    srand(time(NULL));

    // Generate random numbers for two dice
    die1 = rand() % 6 + 1; // Generates a random number between 1 and 6
    die2 = rand() % 6 + 1;

    // Calculate the sum
    sum = die1 + die2;

    // Print the result
    printf("Sum of two dice rolls: %d\n", sum);

    return 0;
}
