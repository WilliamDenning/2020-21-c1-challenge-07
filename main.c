#include <stdio.h>

int main(void) {

  int input;
  int output = 0;
  int mod;

  printf("number?\n");
  scanf("%i", &input);

  do 
  {
    mod = input % 10;
    output = output + mod;
    input = input / 10;
  } while (input >= 1);

  printf("%i", output);

  return 0;
}