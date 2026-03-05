#include <stdio.h>
#include <dirent.h>

int main()
{
	DIR *directory; // pointer to directory stream.
	// DIR is a structure type defined in dirent.h.
	// It is used to represent a directory stream.
	// FILE is a structure type defined in stdio.h.
	// It is used to represent a file stream.

	/* open the directory */
	directory = opendir("."); // open current directory
	// . is a special directory name that refers to the
	//  current directory. Syntax of opendir() is similar
	// to fopen().
	if( directory == NULL )
	{
		puts("Unable to open current directory");
		return(1);
	}

	/* do something */
	puts("Opened current directory"); // do something with the directory stream

	/* close the directory */
	closedir(directory); // close the directory stream

	return(0);
}
