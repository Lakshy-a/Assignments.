// Write a function to reverse a string word wise. (For example if the given string is
// “iNeuron Education Services” then the resulting string should be “Services Education
// iNeuron” )

#include <stdio.h>
#include <string.h>

void reverse_words(char *str) {
  int length = strlen(str);
  int i, j;

  for (i = 0, j = length - 1; i < j; i++, j--) {
    char temp = str[i];
    str[i] = str[j];
    str[j] = temp;
  }

  int start = 0, end = 0;
  for (i = 0; i <= length; i++) {
    if (str[i] == ' ' || str[i] == '\0') {
      end = i - 1;
      for (j = start; j < start + (end - start + 1) / 2; j++) {
        char temp = str[j];
        str[j] = str[start + end - j];
        str[start + end - j] = temp;
      }
      start = i + 1;
    }
  }
}

int main() {
  char str[100];
  printf("Enter a string: ");
  fgets(str, 100, stdin);

  reverse_words(str);

  printf("Reversed string: %s", str);

  return 0;
}
