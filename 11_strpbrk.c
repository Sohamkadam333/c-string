// The strpbrk function in C is used to find the first occurrence of any character from a specified set of characters in a given string.It is declared in the<string.h> header file.The function returns a pointer to the first occurrence of any character from the specified set in the string, or a null pointer if none of the characters are found.

#include <stdio.h>
#include <string.h>
int main()
{
  const char *str = "Hello world";

  const char *charSet = "aeiou";

  const char *firstOccurrence = strpbrk(str, charSet);

  if (firstOccurrence != NULL)
  {
    int index = firstOccurrence - str;
    printf("First occurrence of e = %d\n", index);
  }
  else
  {
    printf("Invalid charcater | character not found");
  }

  return 0;
}