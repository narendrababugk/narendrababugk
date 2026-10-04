#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* longestCommonPrefix(char** strs, int strsSize) {
    if (strsSize == 0) {
        char *s = malloc(1);
        s[0] = '\0';
        return s;
    }

    int j = 0;

    while (strs[0][j] != '\0') {

        for (int i = 1; i < strsSize; i++) {

            if (strs[i][j] != strs[0][j] || strs[i][j] == '\0') {

                char *s = malloc(j + 1);

                for (int k = 0; k < j; k++) {
                    s[k] = strs[0][k];
                }

                s[j] = '\0';

                return s;
            }
        }

        j++;
    }

    char *s = malloc(j + 1);

    for (int k = 0; k < j; k++) {
        s[k] = strs[0][k];
    }

    s[j] = '\0';

    return s;
}

int main() {

    char *strs[] = {"flower", "flow", "flight"};

    int strsSize = 3;

    char *result = longestCommonPrefix(strs, strsSize);

    printf("Longest Common Prefix: %s\n", result);

    free(result);

    return 0;
}