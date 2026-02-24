#include <stdio.h> // include the standard input/output header
// for printf and fgets functions
#include <stdlib.h> // include the standard library header
// for memory allocation functions

char *get_input(int size) // function to read input from the user
// and return a pointer to the input string.
{
	char *a; // pointer to store the input string
	int x = 0;

	/* allocate storage */
	a = malloc( sizeof(char) * size ); // allocate memory for the input string
	// a instead of *a because we want to store the pointer to the input string,
	// not the value of the input string
	if( a==NULL )
	{
		puts("Unable to allocate memory"); // if malloc fails to allocate memory,
		// print an error message and exit the program.
		exit(1); // exit the program with a non-zero status to indicate an error.
	}

	/* read input */
	fgets(a,size,stdin);
	/* remove newline */
	while( *(a+x) != '\0' ) // loop through the input string
	//  until we reach the null terminator.
	// *(a+x) instead of (a+x) because we want to access the value of the input string,
	// not the pointer to the input string. Is it dereferncing the pointer? 
	// Yes, it is dereferencing the pointer to access the value of the input
	// string at the current index x.
	{
		if( *(a+x)=='\n' ) // if we find a newline character, replace it with a null terminator.
		// *(a+x) not (a+x) because we want to access the value of the input string at the
		//  current index x, not the pointer to the input string at the current index x.
		// Is it dereferencing the pointer? Yes, it is dereferencing the pointer
		// to access the value of the input string at the current index x.
		{
			*(a+x) = '\0'; // replace the newline character with a null terminator
			// to end the string
			break;// break out of the loop since we have reached the end of the string
			
		}
		x++; // increment x to move to the next character in the input string
	}

	return(a); // return the pointer to the input string
}

int main()
{
	char *your_name,*your_city; // pointers to store the input strings for name and city

	printf("Your name: "); // prompt the user for their name
	your_name = get_input(32); // call the get_input function to read the user's
	// name and store it in the your_name pointer
	printf("Your city: "); // prompt the user for their city
	your_city = get_input(32); // call the get_input function
	// to read the user's city and store it in the
	//  your_city pointer.

	printf("%s lives in %s.\n",your_name,your_city);

	free(your_name); // free the memory allocated for the
	// your_name string to avoid memory leaks. your_name not *your_name
	// because we want to free the memory allocated for the input string,
	free(your_city); // free the memory allocated for the your_city
	//string to avoid memory leaks. your_city not *your_city

	return 0;
}
