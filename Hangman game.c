#include "hangman_func.h"
#include <stdio.h>

#define Win 1
#define Lose 0

int main(void) {
  char word[] = "game";
  char empty_word[5] = {'X', 'X', 'X', 'X', '\0'};
  int result;

  printf("You have six chances to guess the word!\n");

  input_reading(empty_word, &result, word);

  return 0;
}
