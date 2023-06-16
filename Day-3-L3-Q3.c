#include <stdio.h>

int is_vowel(char ch) {
  switch (ch) {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
      return 1;
    default:
      return 0;
  }
}

int main() {
  char ch;

  // Get user input
  printf("Enter a character: ");
  scanf(" %c", &ch);

  // Check if vowel
  if (is_vowel(ch)) {
    printf("Vowel\n");
  } else {
    printf("Not Vowel\n");
  }

  return 0;
}
