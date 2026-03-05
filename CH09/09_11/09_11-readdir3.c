#include <stdio.h>
#include <dirent.h> // include the dirent.h header file, which contains the definitions
// for the DIR type and the readdir() function.

int main()
{
	DIR *directory; // pointer to a directory stream
	// DIR is a type that represents a directory stream.
	// It is used to read the contents of a directory.
	// * is used to declare a pointer to a directory stream.

	struct dirent *file; // pointer to a dirent structure
	// struct dirent is a structure that represents a directory entry.
	// *file is a pointer to a dirent structure.
	// It is used to represent a directory entry.

	/* open the directory */
	directory = opendir("."); // open the current directory (".")
	// and return a pointer to a directory stream.

	if( directory == NULL )
	{
		puts("Unable to open current directory");
		return(1);
	}

	/* do something */
	while( (file=readdir(directory)) != NULL ) // read each entry
	// in the directory stream.
	// The readdir() function returns a pointer to a dirent
	// structure representing the next directory entry
	// in the directory stream. If there are no more entries,
	// it returns NULL. file is a pointer to a dirent structure
	// that contains information about the directory entry,
	// including the name of the file or directory (d_name).

		printf("Found the file %s\n",file->d_name); // print the name
		// of the file or directory. file->d_name is a member of the dirent structure that contains
		// the name of the file or directory. file is a pointer to a dirent structure,
		// and d_name is a member of that structure. file.d_name won't work
		// because file is a pointer, not a structure.

	/* close the directory */
	closedir(directory);

	return(0);
}

