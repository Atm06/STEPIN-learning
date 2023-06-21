#include <stdio.h>
#include <stdlib.h>

struct student {
  char name[50];
  int roll_number;
  float marks;
};

int main() {
  int n, i;
  struct student *students;

  // Get the number of students from the user
  printf("Enter the number of students: ");
  scanf("%d", &n);

  // Allocate memory for the student structures
  students = (struct student *)malloc(n * sizeof(struct student));

  // Get the data for the students
  for (i = 0; i < n; i++) {
    printf("Enter the name of student %d: ", i + 1);
    scanf("%s", students[i].name);
    printf("Enter the roll number of student %d: ", i + 1);
    scanf("%d", &students[i].roll_number);
    printf("Enter the marks of student %d: ", i + 1);
    scanf("%f", &students[i].marks);
  }

  // Print the data for the students
  for (i = 0; i < n; i++) {
    printf("The name of student %d is: %s\n", i + 1, students[i].name);
    printf("The roll number of student %d is: %d\n", i + 1, students[i].roll_number);
    printf("The marks of student %d is: %.2f\n", i + 1, students[i].marks);
  }

  // Free the memory allocated for the student structures
  free(students);

  return 0;
}
