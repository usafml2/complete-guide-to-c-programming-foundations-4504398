#include <stdio.h>

int filecopy(char *org,char *dup) // copy a file
{
	FILE *o,*d; // original and duplicate file pointers
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
	fclose(o);
	fclose(d);
	return(0);
}

int main()
{
	char original[] = "beta.txt";
	char duplicate[] = "betacopy.txt";
	int r;

	r = filecopy(original,duplicate);
	if( r==-1 )
		puts("Unable to copy files");
	else
		printf("%s copied to %s\n",original,duplicate);

	return(0);
}
