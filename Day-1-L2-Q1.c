#include <stdio.h>

int greatest(int a, int b, int c) {
  if (a > b && a > c) {
    return a;
  } else if (b > a && b > c) {
    return b;
  } else {
    return c;
  }
}

int main() {
  int a, b, c;

  // Get user input
  printf("Enter three numbers: ");
  scanf("%d %d %d", &a, &b, &c);

  // Find the greatest number
  int greatest_number = greatest(a, b, c);

  // Print the greatest number
  printf("The greatest number is %d\n", greatest_number);

  return 0;
}
