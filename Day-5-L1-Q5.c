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

void sort_structures(struct Student *students, int n) {
  int i, j;
  struct Student temp;

  for (i = 0; i < n - 1; i++) {
    for (j = i + 1; j < n; j++) {
      if (strcmp(students[i].name, students[j].name) < 0) {
        temp = students[i];
        students[i] = students[j];
        students[j] = temp;
      }
    }
  }
}

int search_structures(struct Student *students, int n, char *name) {
  int i;

  for (i = 0; i < n; i++) {
    if (strcmp(students[i].name, name) == 0) {
      return i;
    }
  }

  return -1;
}

int main() {
  int n;
  char string[100];
  struct Student *students;
  char name[20];

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

  // Sort the array of structures
  sort_structures(students, n);

  // Get the name of the student to search
  printf("Enter the name of the student to search: ");
  scanf("%s", name);
  // Search the array of structures
  int index = search_structures(students, n, name);

  // Check if the student was found
  if (index == -1) {
    printf("The student was not found.\n");
  } else {
    printf("The student was found at index %d.\n", index + 1);
  }

  // Free the memory allocated for the array of structures
  free(students);

  return 0;
}
