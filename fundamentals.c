//This mudule , take a string and a number (as input ) ,
// then stores them in two arrays , 
// in the loop, it is checked that ifinput character not to be 'q'
// then continue receiving input.
// the input number is the position of a character 
// then this character will be shown  

// //FUNDAMENTALS MODULE SOURCE
#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE     80
#define NUM_INPUT_SIZE  10

// Include the header file "fundamentals.h"
#include "fundamentals.h"


// Define a function named fundamental
void fundamentals() {
	// Version 1 

	// Print a message denoting start of the indexing string demo
	printf("*** Start of Indexing Strings Demo ***\n");

	// Declare character arrays storing input characters
	char    buffer1[BUFFER_SIZE];
	char    numInput[NUM_INPUT_SIZE];

	// Declare a structure storing position of character inside the string
	size_t  position;

	// writing a loop in order to repeatedly prompt user to input the string 
	do {

		// Prompt the user to input a non-empty string
		printf("Type not empty string (q - to quit):\n");
		fgets(buffer1, BUFFER_SIZE, stdin);

		// omit the new character at the end of string
		buffer1[strlen(buffer1) - 1] = '\0';

		// Check whether input character is not 'q' to continue
		if (strcmp(buffer1, "q") != 0) {

			// Prompt the user to input the character position within the string

			printf("Type the character position within the string:\n");
			fgets(numInput, NUM_INPUT_SIZE, stdin);

			// omit the new character at the end of the input
			numInput[strlen(numInput) - 1] = '\0';

			// Convert the user input to an integer (position)
			position = atoi(numInput);

			// Check if the position is greater than or equal to the string length
			if (position >= strlen(buffer1)) {

				// Adjust the position to the maximum available
				position = strlen(buffer1) - 1;
				printf("Too big... position reduced to max.available\n");

			}

			// Print the character found at definite position
			printf("The character found at %d posiition is \'%c\'\n", (int)position, buffer1[position]);

		}
	} while (strcmp(buffer1, "q") != 0);

	// Print a message showing  the end of indexing string demo
	printf("*** End of Indexing Strings Demo ***\n\n");

//version 2

// Display a message indicating the start of the measuring strings demo.
	printf("*** start of measuring strings Demo ***\n");

	// Declare an array to store user input strings.
	char buffer2[BUFFER_SIZE];

	// Start a do-while loop that continues until the user enters 'q' to quit.
	do {
		// Prompt the user to type a string.
		printf("Type a string (q - to quit):\n");

		// Read a string from the user and store it in the buffer.
		fgets(buffer2, BUFFER_SIZE, stdin);

		// Remove the newline character at the end of the string (if any).
		buffer2[strlen(buffer2) - 1] = '\0';

		// Check if the entered string is not equal to 'q'.
		if (strcmp(buffer2, "q") != 0) {
			// If the entered string is not 'q', display its length.
			printf("the length of \'%s\' is %d characters\n",
				buffer2, (int)strlen(buffer2));
		}

		// Continue the loop as long as the user input is not 'q'.
	} while (strcmp(buffer2, "q") != 0);

	// Display a message indicating the end of the measuring strings demo.
	printf("*** End of Measuring Strings Demo ***\n\n");



	// version 3

	 /*The main function of the code is to interactively demonstrate string copying in C.
	 It uses a do-while loop to repeatedly prompt the user for input, copies the input string to another variable, and prints the result.
	 The demonstration continues until the user enters "q" to quit, providing a simple illustration of string manipulation in C.
	 */

	printf("*** Start of Copying Strings Demo ***\n");

	// Declare character arrays to store source and destination strings
	char destination[BUFFER_SIZE];
	char source[BUFFER_SIZE];

	// Start a do-while loop for user input and string copying
	do
	{
		// Reset the destination string to an empty string
		destination[0] = '\0';
		printf("Destination string is reset to empty\n");

		// Prompt the user to type the source string (q - to quit)
		printf("Type the source string (q - to quit):\n");

		// Read the source string from the user input
		fgets(source, BUFFER_SIZE, stdin);

		// Remove the newline character at the end of the source string
		source[strlen(source) - 1] = '\0';

		// Check if the user wants to quit (input is "q")
		if (strcmp(source, "q") != 0)
		{
			// Copy the source string to the destination string
			strcpy(destination, source);

			// Print the new destination string
			printf("New destination string is \'%s\'\n", destination);
		}

	}
	// Continue the loop until the user types "q" to quit
	while (strcmp(source, "q") != 0);

	// Print a message indicating the end of the Copying Strings Demo
	printf("*** End of Copying Strings Demo ***\n\n");

}

