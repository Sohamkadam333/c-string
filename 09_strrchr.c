// The strrchr function in C is used to find the last occurrence of a specified character in a given string. It is declared in the <string.h> header file. The function returns a pointer to the last occurrence of the specified character in the string or a null pointer if the character is not found

#include <stdio.h>
#include <string.h>
int main()
{
  const char *str = "Hello World";

  const char *lastOccurrence = strrchr(str, 'o');

  if (lastOccurrence != NULL)
  {
    int index = lastOccurrence - str;
    printf("Last Occurrence of o is %d\n", index);
  }
  else
  {
    printf("Invalid character | character not found");
  }

  return 0;
}