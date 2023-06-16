#include <stdio.h>

int char_type(char ch) {
  if (ch >= 'A' && ch <= 'Z') {
    return 1;
  } else if (ch >= 'a' && ch <= 'z') {
    return 2;
  } else if (ch >= '0' && ch <= '9') {
    return 3;
  } else if (isprint(ch)) {
    return 4;
  } else {
    return 5;
  }
}

int main() {
  char ch;

  // Get user input
  printf("Enter a character: ");
  scanf(" %c", &ch);

  // Get the type of the character
  int type = char_type(ch);

  // Print the type of the character
  switch (type) {
    case 1:
      printf("The character is an uppercase letter.\n");
      break;
    case 2:
      printf("The character is a lowercase letter.\n");
      break;
    case 3:
      printf("The character is a digit.\n");
      break;
    case 4:
      printf("The character is a printable symbol.\n");
      break;
    case 5:
      printf("The character is a non-printable symbol.\n");
      break;
  }

  return 0;
}
