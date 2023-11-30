
/*
  Header guard to prevent multiple inclusion of the same header file.
  If _MANIPULATING_H_ is not defined, the content of the file is processed;
  otherwise, it's skipped to avoid redefinition errors.
*/
#ifndef _MANIPULATING_H_
#define _MANIPULATING_H_

// Include necessary standard C libraries
#include <stdio.h>
#include <string.h>

// Declaration of the manipulating function
void manipulating(void);

// End of the header guard conditional compilation
#endif