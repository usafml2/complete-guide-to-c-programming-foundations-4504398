#include <stdio.h>
#include <stdlib.h>

int main()
{
	struct data { // Define the structure with an integer and a character
		int v;
		char c;
	} *alpha[26]; // Array of pointers to the structure,
	// with 26 elements for each letter of the alphabet
	// Note: The structure is defined with the name 'data',
	// and the array of pointers is named 'alpha'.
	  int x; // Variable for loop iteration

	/* both allocate and assign the structures */
	for( x=0; x<26; x++ )
	{
		alpha[x] = malloc( sizeof(struct data) );
		if( alpha[x]==NULL )
		{
			puts("Memory allocation error");
			exit(1);
		}
		alpha[x]->v = x; // Assign integer value starting from 0 to 25
		alpha[x]->c = 'A'+x; // Assign char value starting from 'A' to 'Z'
		// using ASCII values (A=65, Z=90). 'A' + x 
		// will give the correct character for each index (0 to 25).
	}

	/* output */
	for( x=0; x<26; x++ )
		printf("%d, %c\n",alpha[x]->v,alpha[x]->c);

	/* clean-up */
	for( x=0; x<26; x++ ) // Loop through the array of
	// pointers to free the allocated memory.
		free(alpha[x]); // Free the allocated memory
	// for each pointer in the array
	
	return 0;
}
