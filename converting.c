#define _CRT_SECURE_NO_WANRINGS
#define BUFFER_SIZE 80
#include "converting.h"		//include function prototype(s)


/*String-to-interger conversion module.
Receives a numeric string from user,
then converts it to the equivalent interger and output the interger
The program quits when user enters "q" as the numeric string*/

void converting() {
/* Version 1 */
	printf("*** Start of Converting Strings to int Demo ***\n");
	char	intString[BUFFER_SIZE];
	int		intNumber;

	//loop until the input is equal to "q"
	do {
		printf("Type an int numeric string (q - to quit) :\n");
		fgets(intString, BUFFER_SIZE, stdin);
		intString[strlen(intString) - 1] = '\0';		//making sure the string ends with NUL, as fgets does not put the NUL at the end if the buffer is overflowed.
		if (strcmp(intString, "q") != 0) {
			intNumber = atoi(intString);			//intNumber is the result to be output
			printf("Converted number is %d\n", intNumber);
		}
	} while (strcmp(intString, "q") != 0);
	printf("*** End of Converting Strings to iint Demo ***\n\n");


/* Version 2 */
// >> insert here


/* Version 3 */
// >> insert here


}
