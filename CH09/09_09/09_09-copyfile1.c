#include <stdio.h>

int filecopy(char *org,char *dup) // copy a file
// *org and *dup are pointers to the original and duplicate file names
{
	FILE *o,*d; // original and duplicate file pointers.
	// FILE is a structure type defined in stdio.h that
	// contains information about a file.
	int c; // character read from the original file

	/* open/create the files */
	o = fopen(org,"r"); // open the original file for reading
	d = fopen(dup,"w"); // create the duplicate file for writing
	if( org==NULL || dup==NULL) // check if the files were opened successfully
	{
		return(-1);
	}

	/* read/write to copy the file */
	while(1)
	{
		c = fgetc(o); // read a character c from the original file
		if( c == EOF )
			break;
		fputc(c,d); // write the character c to the duplicate file.
		// c is automatically promoted to an int by fputc().
		// Also c is automatically demoted to a char by fgetc()
		// when it is read from the original file.
		// d is a pointer to the duplicate file.
	}

	/* clean-up */
	fclose(o); // close the original file
	fclose(d); // close the duplicate file

	return(0);
}

int main()
{
	char original[] = "beta.txt"; // original file name. Must be character array,
	// not a pointer to a string literal.
	char duplicate[] = "betacopy.txt"; // duplicate file name. 
	// Must be character array, not a pointer to a string literal.

	int r; // return value from filecopy()

	r = filecopy(original,duplicate); // copy the file
	// call the filecopy() function to copy the original
	// file to the duplicate file. It is outside the scope of main()
	// so it can be used in other files as well.
	// Because orginal and duplicte are arrays,
	// they are automatically converted to pointers
	// when passed to the function. Original and duplicate are arguments
	// to the function filecopy() and org and dup are parameters to the function.
	// They are passed by value, but the value is a pointer
	// to the first element of the array.
	if( r==-1 )
		puts("Unable to copy files");
	else
		printf("%s copied to %s\n",original,duplicate);

	return(0);
}
