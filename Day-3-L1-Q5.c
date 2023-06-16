#include <stdio.h>

void findSmallestAndLargestDigits(int n, int numbers[]);

int main() {
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    int numbers[n];

    printf("Enter the numbers: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    findSmallestAndLargestDigits(n, numbers);

    return 0;
}

void findSmallestAndLargestDigits(int n, int numbers[]) {
    int smallestDigit = 9;
    int largestDigit = 0;
    int validNumbers = 0;

    for (int i = 0; i < n; i++) {
        int currentNumber = numbers[i];

        while (currentNumber != 0) {
            int digit = currentNumber % 10;

            if (digit < smallestDigit) {
                smallestDigit = digit;
            }

            if (digit > largestDigit) {
                largestDigit = digit;
            }

            currentNumber /= 10;
        }

        if (smallestDigit != 0 && largestDigit != 0) {
            printf("Smallest and Largest digits of number %d: %d and %d\n", numbers[i], smallestDigit, largestDigit);
            validNumbers++;
        } else {
            printf("Number %d is not valid\n", numbers[i]);
        }

        smallestDigit = 9;
        largestDigit = 0;
    }

    if (validNumbers == 0) {
        printf("No valid numbers found\n");
    }
}
