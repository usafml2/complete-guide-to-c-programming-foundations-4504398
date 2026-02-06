#include <stdio.h> // Include the standard input/output library for functions like printf and fgets
#include <stdlib.h> // Include the standard library for functions like exit
// (not used in this code but commonly included)
#include <ctype.h> // Include the ctype library for character handling functions like toupper
#include <string.h> // Include the string library for functions like strlen

void remove_newline(char *input) // Function to remove the newline character from the input string.
// The function takes a pointer to a character array (string) as an argument and modifies it in place.
{
  int i; // Variable declaration for iterating through the string
  for (i = 0; input[i] != '\0'; i++) // Loop through the string until the null terminator is reached
  {
    if (input[i] == '\n') // Check if the current character is a newline character
    {
      input[i] = '\0'; // Replace the newline character with a null terminator to end the string
      break; // Stop after replacing the first (and usually only) newline
    }
  }
}

int main()
{

  char input[32]; // Variable declaration for storing user input, with a maximum of 20 characters

  printf("Command: \n");// Prompt the user to enter some command

  fgets(input, 32, stdin); // Fetch input from the user and store it in the 'input' variable,
  // ensuring it does not exceed 20 characters
  
  remove_newline(input); // Call the function to remove the newline character from the input string

  // Get the length of the string
  size_t length = strlen(input); // Calculate the length of the input string using strlen() function
  // size_t is an unsigned integer type used for sizes and counts
  // Iterate through the string character by character
  for (size_t i = 0; i < length; i++) // Loop through each character in the string using its length
  // size_t is used here to ensure compatibility with the length type returned by strlen()
  {
    if (strcmp(input, "QUIT\n") == 0) // Check if the input string is "QUIT\n"
    {
      break; // If it is, exit the loop and end the program
    }
    // Convert the current character to uppercase using toupper()
    input[i] = toupper((unsigned char)input[i]); // Convert the character to uppercase
    // and store it back in the same position in the string
  }

  // Print the modified string
  printf("Uppercase text: %s\n", input); // Output the modified string,
  // which is now in uppercase, to the user
  printf("Your string length is: %zu characters long\n", length); // Print the length of the string using %zu format
  // specifier for size_t

  return (0);
}