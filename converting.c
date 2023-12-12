#define _CRT_SECURE_NO_WANRINGS
#define BUFFER_SIZE 80
#include "converting.h"		//include function prototype(s)


/*String-to-interger conversion module.*/



/*Receives a numeric string from user,
then converts it to the equivalent  number and output the number
The program quits when user enters "q" as the numeric string */
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


/*Receives a double numeric string from user,
then converts it to the equivalent number and output the number
The program quits when user enters "q" as the double numeric string */
/* Version 2 */
// >> insert here
	printf("*** Start of Converting Strings to int Demo ***\n");
	char	doubleString[BUFFER_SIZE];
	double		doubleNumber;

	//loop until the input is equal to "q"
	do {
		printf("Type the double numeric string (q - to quit) :\n");
		fgets(doubleString, BUFFER_SIZE, stdin);
		doubleString[strlen(doubleString) - 1] = '\0';		//making sure the string ends with NUL, as fgets does not put the NUL at the end if the buffer is overflowed.
		if (strcmp(doubleString, "q") != 0) {
			doubleNumber = atof(doubleString);			//doubleNumber is the result to be output
			printf("Converted number is %f\n", doubleNumber);
		}
	} while (strcmp(doubleString, "q") != 0);
	printf("*** End of Converting Strings to double Demo ***\n\n");


/* Version 3 */
// >> insert here
/*Receives a long numeric string from user,
then converts it to the equivalent number and output the number
The program quits when user enters "q" as the long numeric string */
/* Version 3 */
// >> insert here
	printf("*** Start of Converting Strins to long Demo ***\n");
	char	longString[BUFFER_SIZE];
	long	longNumber;

	//loop until users input "q"
	do {
		printf("Type the long numeric string (q - to quit): \n");
		fgets(longString, BUFFER_SIZE, stdin);
		longString[strlen(longString) - 1] = '\0'; 		//making sure the string ends with NUL, as fgets does not put the NUL at the end if the buffer is overflowed.
		if ((strcmp(longString, "q") != 1)) {
			longNumber = atol(longString);		//longNumber is the result to be output
			printf("Converted number is %ld\n", longNumber);
		}
	} while (strcmp(longString, "q") != 0);
	printf("*** End of Converting Strings to long Demo ***\n\n");
}
