#include<stdio.h>
#include<bool.h>

bool judgeSquareSum(int c) {
    for (long long a = 0; a * a <= c; a++) {
        for (long long b = 0; b * b <= c; b++) {
            if (a * a + b * b == c) {
                return true;
            }
        }
    }

    return false;
}
int main() {
int c;

printf("Enter a number: ");
scanf("%d", &c);

if (judgeSquareSum(c)) {
    printf("true\n");
} else {
    printf("false\n");
}

return 0;

}