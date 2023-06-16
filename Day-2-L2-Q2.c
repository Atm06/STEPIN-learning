#include <stdio.h>

int compare_boxes(int *box1, int *box2, int size) {
  // Check if the boxes have the same size
  if (size != sizeof(box1) / sizeof(box1[0])) {
    return 0;
  }

  // Compare the items in the boxes
  for (int i = 0; i < size; i++) {
    if (box1[i] != box2[i]) {
      return 0;
    }
  }

  // The boxes are equal
  return 1;
}

int main() {
  int box1[] = {200, 10, -90};
  int box2[] = {-90, 200, 10};

  int result = compare_boxes(box1, box2, sizeof(box1) / sizeof(box1[0]));

  if (result == 1) {
    printf("The boxes are equal.\n");
  } else {
    printf("The boxes are not equal.\n");
  }

  return 0;
}
