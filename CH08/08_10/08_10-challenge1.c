// Challenge: Create an array of structure pointers
// Create a structure that contains an integer and a character.
// The array contains 26 elements, each representing a letter of the alphabet.
// First structure: int value 0, char value 'A'
// Second structure: int value 25, char value 'Z'
// Then create an array of pointers to this structure,
// and allocate memory for each pointer in the array.
// Finally, assign values to the members of each structure
// through the pointers and output the data stored in each structure.


#include <stdio.h>
#include <stdlib.h>

int main()
{
	struct firstStructure // Define the structure.
	// Type is firstStructure, and it contains an integer and a character.
	{
		int value;
		char letter;
	} *arrayOfPointers[26];
	 // Array of pointers to the structure
  // Assigned to the structure type, and the size of the array
	// is 26 to represent each letter of the alphabet
	for (int i = 0; i < 26; i++)
	{
		arrayOfPointers[i] = malloc(sizeof(struct firstStructure)); 
		// Allocate memory for each pointer in the array
		arrayOfPointers[i]->value = i;
		// Assign values to the members of each structure through the pointers
		arrayOfPointers[i]->letter = 'A' + i; 
		// Assign char value starting from 'A' to 'Z' using ASCII values (A=65, Z=90) 
	}

	for (int i = 0; i < 26; i++)
	{
		printf("Value: %d, Letter: %c\n", arrayOfPointers[i]->value, arrayOfPointers[i]->letter);
	}

	for (int i = 0; i < 26; i++)
	{
		free(arrayOfPointers[i]);
	}

	return 0;
}
