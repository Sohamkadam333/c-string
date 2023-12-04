// strerror() Function Description : The strerror() function in C is used to retrieve a pointer to the textual representation of the current errno value.errno is a global variable that is set by system calls and some library functions in the event of an error to indicate what went wrong.The strerror() function interprets the value of errno and returns a pointer to a string describing the corresponding error.

#include <stdio.h>
#include <string.h>