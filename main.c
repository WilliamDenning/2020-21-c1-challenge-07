#include <stdio.h>

void add_digits(int input, int output)
{
  int mod;
  
  mod = input % 10;
  output = output + mod;
  input = input / 10;

  if (input >= 1)
  {
    add_digits(input, output);
  }
  else
  {
    printf("%i", output);
  }
}

int main(void) 
{
  int input;
  int output = 0;

  printf("number?\n");
  scanf("%i", &input);

  add_digits(input, output);

  return 0;
}