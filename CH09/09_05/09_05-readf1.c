#include <stdio.h> // include the standard input/output library
// for file operations and printing to the console.

int main() // main function, the entry point of the program.
{
	const char filename[] = "integers.dat"; // declare a constant
	// character array to hold the filename
	FILE *fp; // declare a file pointer variable
	// to hold the address of the file. FILE is
	// a type defined in stdio.h for file handling.
	int x,a; // declare two integer variables x and a.
	// x will be used as a loop counter, and a will be
	// used to store the integers read from the file.

	/* open the file for reading */
	fp = fopen(filename,"r");
	if( fp == NULL )
	{
		printf("Unable to open %s\n",filename);
		return(1);
	}

	/* read integers */
	for(x=0;x<10;x++)
	{
		fread(&a, sizeof(int), 1, fp ); // read one integer from the file.
		// syntax of fread is fread(buffer, size, count, stream). &a is the 
		// address of the variable a, sizeof(int) is the size of one integer,
		// 1 is the number of integers to read, and fp is the file pointer.
		printf("%d\n",a);
	}

	/* close */
	fclose(fp);

	return(0);
}

