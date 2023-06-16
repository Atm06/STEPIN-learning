#include <stdio.h>

void printBits(unsigned int num);

int main() {
    unsigned int num;

    printf("Enter a 32-bit integer: ");
    scanf("%u", &num);

    printf("Bits: ");
    printBits(num);

    return 0;
}

void printBits(unsigned int num) {
    unsigned int mask = 1u << 31; // Start with the leftmost bit

    for (int i = 0; i < 32; i++) {
        unsigned int bit = (num & mask) ? 1 : 0;
        printf("%u", bit);
        mask >>= 1; // Shift the mask to the right by 1 bit
    }
}
