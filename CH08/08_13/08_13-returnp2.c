#include <stdio.h>
#include <stdlib.h>

int *makearray(int size) // function prototype
// function type is integer *makearray (pointer to integer data)
// size is the parameter of type int (integer) number of integers to allocate.
{
	int *p; // declare a pointer to integer data,
	// which will point to the allocated array of integers
	int x;

	/* allocate storage for `size` integers */
	p = malloc( sizeof(int) * size ); // allocate memory for size(that many) integers and
	// assign the address to pointer p. * is for dereferencing, not multiplication. 
		if( p == NULL )
	{
		puts("Unable to allocate memory");
		exit(1);
	}
	
	/* fill the array */
	for(x=0;x<size;x++) // loop from 0 to size-1, using x as the index
		*(p+x) = (x+1)*10; // assign the value (x+1)*10 to the element
		// at index x of the array pointed to by p.

	return(p); // return the pointer p to the caller,
	// which points to the allocated array of integers.
}

int main()
{
	int *i,x;

	i = makearray(5); // call the makearray function with size 5,
	// and assign the returned pointer to i
	for(x=0;x<5;x++) // loop from 0 to 4, using x as the index
		printf("%d\n",*(i+x)); // print the value of the element at index x
		// of the array pointed to by i, followed by a newline.

	/* clean-up */
	free(i);
	return(0);
}
