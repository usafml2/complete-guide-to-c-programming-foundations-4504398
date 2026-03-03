#include <stdio.h>

int main()
{
	const char filename[] = "integers.dat";
	FILE *fp; // declare a file pointer variable
	// to hold the address of the file. FILE is a
	// type defined in stdio.h for file handling.
	int x,a[10]; // declare an array of 10 integers
	// to hold the integers read from the file.

	/* open the file for reading */
	fp = fopen(filename,"r"); // open the file for reading
	// syntax of fopen is fopen(filename, mode). "r" is the
	// mode for reading. Is fp dereferenced?
	// No, it is a pointer to a FILE object.
	if( fp == NULL )
	{
		printf("Unable to create %s\n",filename);
		return(1);
	}

	/* read integers */
	fread(a, sizeof(int), 10, fp ); // read 10 integers
	// from the file into the array a. Syntax of fread is
	// fread(buffer, size, count, stream). a is the
	// address of the first element of the array,
	// sizeof(int) is the size of one integer,
	// 10 is the number of integers to read, and fp is the file pointer.
	for(x=0;x<10;x++)
		printf("%d\n",a[x]);

	/* close */
	fclose(fp);

	return(0);
}

