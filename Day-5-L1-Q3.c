#include <stdio.h>
#include <stdlib.h>

struct Student {
  int rollno;
  char name[20];
  float marks;
};

void initialize_structures(struct Student *students, int n) {
  int i;

  for (i = 0; i < n; i++) {
    students[i].rollno = 0;
    strcpy(students[i].name, "");
    students[i].marks = 0.0;
  }
}

void parse_string(char *string, struct Student *students, int n) {
  int i;
  char *token;

  for (i = 0; i < n; i++) {
    token = strtok(string, " ");
    // Get the roll number
    students[i].rollno = atoi(token);

    // Get the name
    token = strtok(NULL, " ");
    strcpy(students[i].name, token);

    // Get the marks
    token = strtok(NULL, " ");
    students[i].marks = atof(token);
  }
}

void display_structures(struct Student *students, int n) {
  int i;

  for (i = 0; i < n; i++) {
    printf("The roll number of student %d is: %d\n", i + 1, students[i].rollno);
    printf("The name of student %d is: %s\n", i + 1, students[i].name);
    printf("The marks of student %d is: %.2f\n", i + 1, students[i].marks);
  }
}

int main() {
  int n;
  char string[100];
  struct Student *students;

  // Get the number of inputs
  printf("Enter the number of inputs: ");
  scanf("%d", &n);

  // Allocate memory for the array of structures
  students = (struct Student *)malloc(n * sizeof(struct Student));

  // Initialize all members in the array of structures
  initialize_structures(students, n);

  // Get the input string
  printf("Enter the input string: ");
  scanf("%s", string);

  // Parse the string
  parse_string(string, students, n);

  // Display the contents of the array of structures
  display_structures(students, n);

  // Free the memory allocated for the array of structures
  free(students);

  return 0;
}
