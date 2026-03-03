#include <stdio.h>

int main()
{
	const char filename[] = "presidents.dat"; // name of the file to read. 
	struct person { // define a structure to hold the data for each president.
		char name[32];
		int inauguration;
		int age;
	} president; // declare a variable of type struct person to hold
	// the data read from the file.
	int x; // declare an integer variable to hold the record number to read.
	FILE *fp; // declare a file pointer to hold the address of the file to be read.
	// FILE is a type defined in stdio.h that represents a file stream.

	/* open the file */
	fp = fopen(filename,"r"); // open the file for reading.
	// The "r" mode indicates that the file is opened for
	// reading only.
	if( fp == NULL )
	{
		printf("Unable to open %s\n",filename);
		return(1);
	}

	/* prompt to read a specific record */
	printf("Enter record to read (1-10): ");
	scanf("%d",&x); // read an integer from the user
	// and store it in x. &x is the address of x,
	// which is passed to scanf so that it can
	// modify the value of x.
	/* validate the input */
	if( x<1 || x>10 ) // check if the input(record number)
	// is within the valid range of 1 to 10
	{
		puts("Invalid input");
		return(1);
	}
	/* decrement x to reference the proper offset */
	x--; // decrement x to convert from 1-based to 0-based indexing

	/* Set the file position indicator */
	fseek(fp, sizeof(struct person)*x, SEEK_SET); // move the file
	// position indicator to the
	// position of the x-th record
	// in the file. fp is the file pointer,
	// sizeof(struct person)*x
	// calculates the byte offset of the x-th record,
	// and SEEK_SET indicates that the offset
	// is from the beginning of the file.

	/* fetch the record */
	fread(&president, sizeof(struct person), 1, fp); // read one record of size
	// sizeof(struct person) from the file
	// and store it in the variable president.
	// &president is the address of the president
	// fp is the file pointer, and 1 indicates that
	// we want to read one record.

	/* print the result */
	printf("President %s was %d years old when inaugurated in %d\n",
			president.name,
			president.age,
			president.inauguration
		  );

	/* close-up */
	fclose(fp);
	return(0);
}


