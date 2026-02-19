#include <stdio.h>
#include <stdlib.h>

char *allocate(size_t size) // function prototype
// function type is character * (pointer to character data)
// size is the parameter of type size_t (integer) bytes to allocate.
{
	char *p; // declare a pointer to character data

	p = malloc(sizeof(char) * size); // allocate memory for size(that many)
	// characters and assign the address to pointer p. * is for dereferencing, 
	// not multiplication. ? 
	// sizeof(char) is the size of a character in bytes (usually 1),
	// and size is the number of characters to allocate.
	
	if( p == NULL )
	{
		puts("Unable to allocate memory");
		exit(1);
	}
	return(p); // return the pointer p to the caller,
	// which points to the allocated memory. It need not be static.
}

int main()
{
	char *a,*b; // declare two pointers to character data, a and b

	printf("Allocating 256 bytes: ");
	a = allocate(256); // call the allocate function with size 256,
	// and assign the returned pointer to a
	puts("Done");
	printf("Allocating 512 bytes: "); // call the allocate function with size 512,
	// and assign the returned pointer to b
	b = allocate(512);
	puts("Done");

	/* clean-up */
	free(a); // free the memory allocated for a, not *a,
	// because a is a pointer to the allocated memory
	free(b); // free the memory allocated for b, not *b,
	// because b is a pointer to the allocated memory
	return(0);
}
