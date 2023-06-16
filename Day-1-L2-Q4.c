#include <stdio.h>

int bit_operations(int num, int oper_type, int pos) {
  // Set 2 bits from nth bit position
  if (oper_type == 1) {
    num = num | (1 << pos) | (1 << (pos + 1));
  }
  // Clear 3 bits from nth bit position
  else if (oper_type == 2) {
    num = num & ~(1 << pos) & ~(1 << (pos + 1)) & ~(1 << (pos + 2));
  }
  // Toggle MSB
  else if (oper_type == 3) {
    num = num ^ (1 << 31);
  }
  return num;
}

int main() {
  int num;
  int oper_type;
  int pos;

  // Get user input
  printf("Enter an integer: ");
  scanf("%d", &num);

  printf("Enter operation type: ");
  scanf("%d", &oper_type);

  printf("Enter bit position: ");
  scanf("%d", &pos);

  // Get the result
  int result = bit_operations(num, oper_type, pos);

  // Print the result
  printf("The result is %d\n", result);

  return 0;
}
