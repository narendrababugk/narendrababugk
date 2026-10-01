#include <stdio.h>
#include <stdint.h>

uint32_t reverseBits(uint32_t n) {
    int binary[32];

    for (int i = 31, j = 0; i >= 0; i--, j++) {
        binary[j] = (n >> i) & 1;
    }

    int left = 0, right = 31;

    while (left < right) {
        int temp = binary[left];
        binary[left] = binary[right];
        binary[right] = temp;

        left++;
        right--;
    }

    uint32_t result = 0;

    for (int i = 0; i < 32; i++) {
        result = result * 2 + binary[i];
    }

    return result;
}

int main() {
    uint32_t n;

    printf("Enter an integer: ");
    scanf("%u",&n);

    uint32_t result = reverseBits(n);

    printf("Reversed bits as integer: %u\n", result);

    return 0;
}