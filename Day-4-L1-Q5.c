#include <stdio.h>

struct student {
  int roll_number;
  char name[50];
};

void swap_structures(struct student *s1, struct student *s2) {
  struct student temp;

  // Swap the roll numbers
  temp.roll_number = s1->roll_number;
  s1->roll_number = s2->roll_number;
  s2->roll_number = temp.roll_number;

  // Swap the names
  strcpy(temp.name, s1->name);
  strcpy(s1->name, s2->name);
  strcpy(s2->name, temp.name);
}

int main() {
  struct student s1, s2;

  // Initialize the structures
  s1.roll_number = 101;
  strcpy(s1.name, "John Doe");
  s2.roll_number = 102;
  strcpy(s2.name, "Jane Doe");

  // Print the original structures
  printf("The original structures are:\n");
  printf("s1.roll_number = %d\n", s1.roll_number);
  printf("s1.name = %s\n", s1.name);
  printf("s2.roll_number = %d\n", s2.roll_number);
  printf("s2.name = %s\n", s2.name);

  // Swap the structures
  swap_structures(&s1, &s2);

  // Print the swapped structures
  printf("The swapped structures are:\n");
  printf("s1.roll_number = %d\n", s1.roll_number);
  printf("s1.name = %s\n", s1.name);
  printf("s2.roll_number = %d\n", s2.roll_number);
  printf("s2.name = %s\n", s2.name);

  return 0;
}
