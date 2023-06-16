#include <stdio.h>

void swap_elements(int *array, int size) {
  for (int i = 0; i < size; i += 2) {
    int temp = array[i];
    array[i] = array[i + 1];
    array[i + 1] = temp;
  }
}

int main() {
  int array[] = {10, 20, 30, 40, 50, 60};
  int size = sizeof(array) / sizeof(array[0]);

  swap_elements(array, size);

  for (int i = 0; i < size; i++) {
    printf("%d ", array[i]);
  }

  printf("\n");

  return 0;
}
