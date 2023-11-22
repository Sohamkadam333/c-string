// strdup() Function Description:
// The strdup() function in C is used to duplicate a given string. It dynamically allocates memory for a new string, copies the contents of the provided string into the new memory block, and returns a pointer to the duplicated string. It is important to note that the memory allocated by strdup() must be freed using free() when it is no longer needed to prevent memory leaks.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
  char *original = "Hello C programming";
  char *duplicate = strdup(original);

  if (duplicate == NULL)
  {
    printf("Error Allocating memory\n");
    return 1;
  }

  printf("Duplicate str = %s\n", duplicate);
  free(duplicate);
  return 0;
}