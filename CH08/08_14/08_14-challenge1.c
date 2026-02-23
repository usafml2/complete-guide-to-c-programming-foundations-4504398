#include <stdio.h> // include necessary header files for input/output,
#include <stdlib.h> // memory allocation, and string manipulation
#include <string.h> // include necessary header files for input/output,

// memory allocation, and string manipulation

// write the get_input() function here
char *get_input(size_t size) // function to get input from the user
// and return a pointer to the input buffer
{
	char *input = malloc(size); // allocate memory for the input buffer
	//*input , not input, because we want to modify the input buffer directly,
	// not the pointer to the input buffer.
	if (input == NULL) // check if memory allocation was successful
	{
		fprintf(stderr,"Memory allocation failed.\n"); // print error message to stderr
		exit(EXIT_FAILURE); // exit the program with a failure status
	}
	fgets(input, size, stdin); // read input from the user and store it in the input buffer.
	// input not *input, because we want to modify the input buffer directly, not the pointer 
	//to the input buffer
	if (input[strlen(input) - 1] == '\n') // check if the last character is a newline
	{
		input[strlen(input) - 1] = '\0'; // replace the newline character with a null terminator
	}
	return input; // return the pointer to the input buffer. input and not *input
	// because we want to return the pointer to the input buffer, not the value of the input buffer
}

int main()
{
	char *your_name,*your_city; // declare pointers to store the user's name and city

	printf("Your name: ");
	your_name = get_input(32); // call the get_input() function to get the user's
	// name and store it in the your_name pointer. not *get_input  because we want to store
	// the pointer to the input buffer, not the value of the input buffer

	printf("Your city: ");
	your_city = get_input(32); // call the get_input() function to get the user's
	// city and store it in the your_city pointer

	printf("%s lives in %s.\n",your_name,your_city);

  free(your_name); // free the memory allocated for the user's name
	free(your_city); // free the memory allocated for the user's city

	return 0;
}
