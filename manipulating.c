/*
  Simple string concatenation program.
  Takes user input for two strings, concatenates them,
  and prints the result until the user enters 'q' to quit.
*/

#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 80
#include "manipulating.h"


// Version 1 

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





    // Version 2

     /* It allows users to input stringsand compares them using the strcmp function in a loop.
     The loop continues until the user inputs 'q' to quit.
    The comparison results (less than, equal, or greater than) are displayed for each pair of strings. */

    printf("*** Start of Comparing Strings Demo ***\n");

    // Declare two character arrays to store input strings.
    char compare1[BUFFER_SIZE];
    char compare2[BUFFER_SIZE];

    // Declare an integer variable to store the result of string comparison.
    int result;

    // Start a do-while loop for user interaction.
    do
    {
        // Prompt the user to input the first string for comparison.
        printf("Type the 1st string to compare (q - to quit):\n");

        // Use fgets to read the input string and remove the newline character.
        fgets(compare1, BUFFER_SIZE, stdin);
        compare1[strlen(compare1) - 1] = '\0';

        // Check if the user wants to quit (entered 'q').
        if (strcmp(compare1, "q") != 0)
        {
            // Prompt the user to input the second string for comparison.
            printf("Type the 2nd string to compare:\n");
            fgets(compare2, BUFFER_SIZE, stdin);
            compare2[strlen(compare2) - 1] = '\0';

            // Use strcmp to compare the two strings and store the result.
            result = strcmp(compare1, compare2);

            // Display the result of the comparison.
            if (result < 0)
            {
                printf("\'%s' string is less than \'%s' \n", compare1, compare2);
            }
            else if (result == 0)
            {
                printf("\'%s' string is equal to \'%s' \n", compare1, compare2);
            }
            else
            {
                printf("\'%s' string is greater than \'%s' \n", compare2, compare1);
            }
        }

    } while (strcmp(compare1, "q") != 0);  // Continue the loop until the user enters 'q'.
    
    // Display an end message for the comparing strings demo.
    printf("*** End of Comparing Strings Demo *** \n\n");
    

   // version 3

    //version 3


    /*It demonstrates searching for a substring within a given string. The program continuously prompts the user to enter a string and a substring until the user enters 'q' to quit. It then searches for the entered substring within the string using the strstr function and prints the position of the substring if found.*/
    
    
    // Display a starting message for the Searching Strings Demo
    printf("*** Start of Searching Strings Demo ***\n");

    char haystack[BUFFER_SIZE];
    char needle[BUFFER_SIZE];
    char* occurrence = NULL;

    // Start a do-while loop to repeatedly prompt the user for input
    do
    {
        // Prompt the user to enter a string
        printf("Type the string (q - to quit):\n");

        // Read the entered string (up to BUFFER_SIZE characters) from the standard input
        fgets(haystack, BUFFER_SIZE, stdin);

        // Remove the newline character from the entered string
        haystack[strlen(haystack) - 1] = '\0';

        // Check if the entered string is not 'q' (quit condition)
        if (strcmp(haystack, "q") != 0)
        {
            // Prompt the user to enter a substring to search for
            printf("Type the substring:\n");

            // Read the entered substring (up to BUFFER_SIZE characters) from the standard input
            fgets(needle, BUFFER_SIZE, stdin);

            // Remove the newline character from the entered substring
            needle[strlen(needle) - 1] = '\0'; // Typo: should be '\0' to properly remove newline

            // Search for the substring in the main string
            occurrence = strstr(haystack, needle);

            // Check if the substring is found in the main string
            if (occurrence)
                // Print the substring found and its position in the main string
                printf("\'%s' found at %d position\n", needle, (int)(occurrence - haystack));
            else
                // Print a message indicating that the substring was not found
                printf("Not found\n");
        }

        // Continue the loop if the entered string is not 'q'
    } while (strcmp(haystack, "q") != 0);

    // Display a closing message for the Searching Strings Demo
    printf("*** End of Searching Strings Demo ***\n\n");







}







