#include <stdio.h>

int main()
{
	char *veeps[5] = { "Adams", "Jefferson", "Burr", "Clinton", "Gerry" }; // array of 5 pointers to char
	int x;

	for(x=0;x<5;x++)
		printf("%s\n",veeps[x]); // print the string pointed to by each element of the array. veeps[x] instead
		// of *veeps[x] because veeps[x] is already a pointer to char, so we can use it directly in printf.

	return(0);
}

