#include <stdio.h>
//Using loops
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
    for (int i = 31; i >= 0; i--) {
        unsigned int mask = 1u << i;
        unsigned int bit = (num & mask) >> i;
        printf("%u", bit);

        if (i % 8 == 0) {
            printf(" "); // Add a space after every 8 bits
        }
    }
}
