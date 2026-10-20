#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<stdlib.h>
bool wordBreak(char* s, char** wordDict, int wordDictSize) {
    int n = strlen(s);

    bool *dp = (bool*)calloc(n + 1, sizeof(bool));

    dp[0] = true;

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < i; j++) {

            if (dp[j] && i - j == 0) {
                dp[i] = true;
            }

            if (dp[j]) {
                int len = i - j;
                char temp[len + 1];

                strncpy(temp, s + j, len);
                temp[len] = '\0';

                for (int k = 0; k < wordDictSize; k++) {
                    if (strcmp(temp, wordDict[k]) == 0) {
                        dp[i] = true;
                        break;
                    }
                }
            }

            if (dp[i]) {
                break;
            }
        }
    }

    bool result = dp[n];
    free(dp);

    return result;
}
int main(){ 
char s[] = "leetcode";
char *wordDict[] = {"leet", "code"}; 
int wordDictSize = 2;
if (wordBreak(s, wordDict, wordDictSize)){ 
printf("true\n"); 
} 
else{ printf("false\n"); 
} 
return 0; 
}