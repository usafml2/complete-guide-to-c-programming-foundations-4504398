#include <stdio.h>

int main()
{
	int twos[5] = { 2, 4, 6, 8, 10 };
	int *pt;

	pt = twos; // pt points to the first element of twos
	// no ampersand is needed because the name of an array
	// is a pointer to its first element
	printf("%p\n",pt);
	printf("%p\n",pt+1); // pt+1 points to the second element of twos
	// pointer arithmetic takes into account the size of the data type
	// so pt+1 is actually 4 bytes (the size of an int) beyond pt

	return(0);
}

