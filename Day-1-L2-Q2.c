#include <stdio.h>

char get_grade(int marks) {
  switch (marks / 10) {
    case 10:
    case 9:
      return 'A';
    case 8:
      return 'B';
    case 7:
      return 'C';
    case 6:
      return 'D';
    case 5:
      return 'E';
    default:
      return 'F';
  }
}

int main() {
  int marks;

  // Get user input
  printf("Enter marks: ");
  scanf("%d", &marks);

  // Get grade
  char grade = get_grade(marks);

  // Print grade
  switch (grade) {
    case 'A':
      printf("Grade A\n");
      break;
    case 'B':
      printf("Grade B\n");
      break;
    case 'C':
      printf("Grade C\n");
      break;
    case 'D':
      printf("Grade D\n");
      break;
    case 'E':
      printf("Grade E\n");
      break;
    case 'F':
      printf("Grade F\n");
      break;
  }

  return 0;
}
