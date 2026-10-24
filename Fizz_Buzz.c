#include<stdio.h>
#include <stdlib.h>

char** fizzBuzz(int n, int* returnSize) {
    char** arr = malloc(n * sizeof(char*));
    *returnSize = n;

    for (int i = 1; i <= n; i++) {
        arr[i - 1] = malloc(20 * sizeof(char));

        if (i % 3 == 0 && i % 5 == 0) {
            sprintf(arr[i - 1], "FizzBuzz");
        }
        else if (i % 3 == 0) {
            sprintf(arr[i - 1], "Fizz");
        }
        else if (i % 5 == 0) {
            sprintf(arr[i - 1], "Buzz");
        }
        else {
            sprintf(arr[i - 1], "%d", i);
        }
    }
    return arr;
}

void main() {
    int n;
    int returnSize;

    printf("Enter n: ");
    scanf("%d", &n);

    char** result = fizzBuzz(n, &returnSize);

    printf("Output: [");

    for (int i = 0; i < returnSize; i++) {
        printf("\"%s\"", result[i]);

        if (i < returnSize - 1) {
            printf(", ");
        }
    }

    printf("]\n");

    // Free allocated memory
    for (int i = 0; i < returnSize; i++) {
        free(result[i]);
    }

    free(result);

   
}
