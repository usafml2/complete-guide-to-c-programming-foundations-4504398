#include <stdio.h>
#include <dirent.h>

int main()
{
	DIR *directory;
	struct dirent *file;

	/* open the directory */
	directory = opendir(".");
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
		// of the file or directory. 

	/* close the directory */
	closedir(directory);

	return(0);
}

