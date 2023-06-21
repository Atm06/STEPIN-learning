#include <stdio.h>
#include <stdlib.h>

struct Student {
  int rollno;
  float marks;
};

float calculate_average(struct Student *students, int n) {
  float sum = 0.0;
  for (int i = 0; i < n; i++) {
    sum += students[i].marks;
  }
  return sum / n;
}

int count_students_above_average(struct Student *students, int n, float average) {
  int count = 0;
  for (int i = 0; i < n; i++) {
    if (students[i].marks > average) {
      count++;
    }
  }
  return count;
}

int count_students_below_average(struct Student *students, int n, float average) {
  int count = 0;
  for (int i = 0; i < n; i++) {
    if (students[i].marks < average) {
      count++;
    }
  }
  return count;
}

int main() {
  int n;
  struct Student *students;

  // Get the number of students
  printf("Enter the number of students: ");
  scanf("%d", &n);

  // Allocate memory for the array of students
  students = (struct Student *)malloc(n * sizeof(struct Student));

  // Read the marks of the students
  for (int i = 0; i < n; i++) {
    printf("Enter the marks of student %d: ", i + 1);
    scanf("%f", &students[i].marks);
  }

  // Calculate the average marks
  float average = calculate_average(students, n);

  // Count the number of students above and below the average marks
  int count_above = count_students_above_average(students, n, average);
  int count_below = count_students_below_average(students, n, average);

  // Print the results
  printf("The average marks is: %.2f\n", average);
  printf("The number of students above the average marks is: %d\n", count_above);
  printf("The number of students below the average marks is: %d\n", count_below);

  // Free the memory allocated for the array of students
  free(students);

  return 0;
}
