#include <stdio.h>

struct box {
  int length;
  int width;
  int height;
};

int main() {
  struct box *box_ptr;
  int volume, surface_area;

  // Allocate memory for the structure pointer
  box_ptr = malloc(sizeof(struct box));

  // Get the length, width, and height of the box from the user
  printf("Enter the length of the box: ");
  scanf("%d", &(box_ptr->length));
  printf("Enter the width of the box: ");
  scanf("%d", &(box_ptr->width));
  printf("Enter the height of the box: ");
  scanf("%d", &(box_ptr->height));

  // Calculate the volume and surface area of the box
  volume = box_ptr->length * box_ptr->width * box_ptr->height;
  surface_area = 2 * (box_ptr->length * box_ptr->width +
                     box_ptr->length * box_ptr->height +
                     box_ptr->width * box_ptr->height);

  // Print the volume and surface area of the box
  printf("The volume of the box is: %d\n", volume);
  printf("The surface area of the box is: %d\n", surface_area);

  // Free the memory allocated for the structure pointer
  free(box_ptr);

  return 0;
}
