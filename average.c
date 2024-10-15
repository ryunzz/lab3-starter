#include <stdio.h>
#include <stdlib.h>

/*
 * argc: The length of the argv array below
 * argv: Array of strings: argv[0] holds the program name as a string; the remaining indices hold the actual command-line arguments
 */
int main(int argc, char *argv[]) {
    int num_args = argc - 1; // argv[0] is program name
    if (num_args < 2) {
        printf("Error: Please provide at least two numbers.\nUsage: %s <number 1> <number 2> ...\n", argv[0]);
        return 1;
    }

    float sum = 0;

    // Loop through each command-line argument to calculate the sum
    // First arg starts at argv[1]
    int i;
    for (i = 1; i < argc; i++) {
        sum += atoi(argv[i]);
    }

    // Calculate the average of all args
    float average = sum / num_args;

    printf("Average: %.2f\n", average);

    return 0;
}
