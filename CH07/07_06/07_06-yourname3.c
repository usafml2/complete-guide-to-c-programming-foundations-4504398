#include <stdio.h> // Include standard input/output library.

int main()
{
	char input[10]; // Array to hold user input.
	int i; // Loop counter.

	printf("Your name? ");
	fgets(input,10,stdin);
	for(i=0;i<10;i++) // Loop to find newline character.
	// Post increment instead of preincrement is
	// used since we want to start checking from index 0.
	{
		if(input[i] == '\n') // If newline found,
			input[i] = '\0'; // replace with null terminator.
	}
	printf("Pleased to meet you, %s!\n",input); // Greet the user. \n is newline character.

	return(0); // Return 0 to indicate successful completion.
}

