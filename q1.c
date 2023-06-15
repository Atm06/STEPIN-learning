#include <stdio.h>

// Function to find the biggest of two numbers using if-else
int findBiggestIfElse(int num1, int num2) {
    if (num1 > num2) {
        return num1;
    } else {
        return num2;
    }
}

// Function to find the biggest of two numbers using ternary operator
int findBiggestTernary(int num1, int num2) {
    return (num1 > num2) ? num1 : num2;
}

int main() {
    int number1, number2;
    
    printf("Enter the first number: ");
    scanf("%d", &number1);
    
    printf("Enter the second number: ");
    scanf("%d", &number2);
    
    int biggestIfElse = findBiggestIfElse(number1, number2);
    int biggestTernary = findBiggestTernary(number1, number2);
    
    printf("Using if-else, the biggest number is: %d\n", biggestIfElse);
    printf("Using ternary operator, the biggest number is: %d\n", biggestTernary);
    
    return 0;
}
