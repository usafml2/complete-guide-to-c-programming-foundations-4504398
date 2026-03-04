#include <stdio.h>

int main()
{
	const char filename[] = "presidents.dat"; // define the name of the file to read from
	// .dat is a binary file that contains the data for each president
	// filename[] is a constant character array that holds the name of the file to read from
	struct person { // define a structure to hold the data for each president
		char name[32];
		int inauguration;
		int age;
	} president; // create a variable of type struct person to hold the data
	// for each president
	int x;
	FILE *fp; // create a file pointer to hold the address of the file we will open.
	// FILE is a structure and data type that holds information about a file,
	// such as its name, size, and position in the file.
	// The *fp is a pointer to a FILE structure,
	// which allows us to access the file's contents.

	/* open the file */
	fp = fopen(filename,"r");
	if( fp == NULL )
	{
		printf("Unable to open %s\n",filename);
		return(1);
	}

	/* read records from back to front */
	for( x=-1; x>-11; x-- )
	{
		fseek(fp, sizeof(struct person)*x, SEEK_END); // move the file pointer to the correct position
		// read the record into the structure from the file.
		// SEEK_END is used to move the file pointer to the end of the file,
		// and then we use fseek to move it backwards
		// by the size of the structure multiplied by x (which is negative).
		// This allows us to read the last 10 records in reverse order.

		fread(&president, sizeof(struct person), 1, fp); // read the record into
		// the structure from the file. 1 is the number of records to read,
		// and sizeof(struct person) is the size of each record.
		//fp is the file pointer to the file we opened earlier.

		/* print the result */
		printf("President %s was %d years old when inaugurated in %d\n",
				president.name,
				president.age,
				president.inauguration
			  );
	}

	/* clean-up */
	fclose(fp);
	return(0);
}


