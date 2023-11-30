/*
  Simple string concatenation program.
  Takes user input for two strings, concatenates them,
  and prints the result until the user enters 'q' to quit.
*/

#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 80
#include "manipulating.h"

/* Version 1 */
void manipulating(void)
{
    // Display a start message
    printf("*** Start of Concatenating Strings Demo ***\n");

    // Declare two character arrays to store strings
    char string1[BUFFER_SIZE];
    char string2[BUFFER_SIZE];

    // Repeat the concatenation process until the user enters 'q'
    do
    {
        // Get user input for the first string
        printf("Type the 1st string (q - to quit):\n");
        fgets(string1, BUFFER_SIZE, stdin);

        // Remove the newline character from the input
        string1[strlen(string1) - 1] = '\0';

        // Check if the user wants to quit
        if ((strcmp(string1, "q") != 0))
        {
            // Get user input for the second string
            printf("Type the 2nd string:\n");
            fgets(string2, BUFFER_SIZE, stdin);

            // Remove the newline character from the input
            string2[strlen(string2) - 1] = '\0';

            // Concatenate the two strings
            strcat(string1, string2);

            // Display the concatenated string
            printf("Concatenated string is '%s'\n", string1);
        }
    } while (strcmp(string1, "q") != 0);

    // Display an end message
    printf("*** End of Concatenating Strings Demo ***\n\n");
}




		/* Version 2 */



		/* Version 3 */
	


