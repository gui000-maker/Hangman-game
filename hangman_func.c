#include "hangman_func.h"
#include <ctype.h>
#include <stdio.h>
#include <string.h>

extern void input_reading(char empty_word[], int *result, char word[]) {
  char c;

  for (int temp = 0; temp < 6; temp++) {
    printf("Choose your letter : ");
    scanf(" %c", &c);
    c = toupper(c);

    switch (c) {
    case 'G':
      empty_word[0] = 'g';
      printf("Good guess.\n");
      break;
    case 'A':
      empty_word[1] = 'a';
      printf("Good guess.\n");
      break;
    case 'M':
      empty_word[2] = 'm';
      printf("Good guess.\n");
      break;
    case 'E':
      empty_word[3] = 'e';
      printf("Good guess.\n");
      break;
    default:
      printf("Wrong guess.\n");
      break;
    }
    *result = strcmp(empty_word, word);

    if (*result == 0) {
      printf("You won! The word is %s.\n\n", word);
      temp = 6;
    } else if ((*result < 0 || *result > 0) && temp == 5) {
      printf("You lost! The word is %s.\n\n", word);
    } else {
      printf("Word now: %s\n\n", empty_word);
    }
  }
}
