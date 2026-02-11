#include <stdio.h>

int main()
{
	int twos[5] = { 2, 4, 6, 8, 10 };
	int *pt;

	pt = twos; // pt points to the first element of twos
	// no ampersand is needed because the name of an array
	// is a pointer to its first element
	printf("%p\n",pt);
	printf("%p\n",pt+1);

	return(0);
}

