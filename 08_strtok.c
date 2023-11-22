// strtok() - String Tokenization :
// Description : Breaks a string into a sequence of tokens based on a specified delimiter.

#include <stdio.h>
#include <string.h>
int main()
{
  char str[] = "apple,banana,cherry";
  char *token = strtok(str, ",");
  while (token != NULL)
  {
    printf("Token = %s\n", token);
    token = strtok(NULL, ",");
  }
  return 0;
}