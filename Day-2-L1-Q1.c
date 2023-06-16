#include <stdio.h>

void printExponent(double num) {
    unsigned long long *p = (unsigned long long *)&num;
    unsigned long long exponent = (*p >> 52) & 0x7FF;

    printf("Exponent in hexadecimal: 0x%llX\n", exponent);
    printf("Exponent in binary: 0b");
    for (int i = 10; i >= 0; i--) {
        printf("%lld", (exponent >> i) & 1);
    }
    printf("\n");
}

int main() {
    double x = 0.7;
    printExponent(x);

    return 0;
}
