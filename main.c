
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {

    // Usage info
    if (argc == 1) {

        printf("Usage: program num1 num2 num3 ...\n");
        return 0;

    }

    // Get the sum of all given numbers
    double total = 0.0;

    for (int i = 1; i < argc; i++)
        total += strtod(argv[i], NULL);
    
    // Print the average
    printf("%f\n", total / (double)(argc - 1));

    return 0;

}
