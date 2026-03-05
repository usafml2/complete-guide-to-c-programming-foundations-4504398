#include <stdio.h>
#include <dirent.h>

int main()
{
	DIR *directory;
	struct dirent *file; // pointer to directory entry structure.
	// dirent is a structure type defined in dirent.h.
	// It is used to represent a directory entry.
	// *file is a pointer to a dirent structure.
	// It is used to represent a directory entry.

	/* open the directory */
	directory = opendir("."); // open the current directory.
	// The opendir() function returns a pointer to a DIR
	// structure that represents the directory stream.
	// The "." argument specifies the current directory.
	if( directory == NULL )
	{
		puts("Unable to open current directory");
		return(1);
	}

	/* do something */
	file = readdir(directory);
	file = readdir(directory); // twice because the first entry is "."
	// and the second entry is "..". This is not exactly what the instructor has.
	//file = readdir(directory); // read the first entry in the directory stream.
	// readdir() returns a pointer to a dirent structure that represents the
	// next entry in the directory stream. file is a pointer to a dirent
	// structure that represents the first entry in the directory stream.

	printf("Found the file %s\n",file->d_name);  // print the name of the
	// first entry in the directory stream. file->d_name is a pointer to
	// a character string that represents the name of the file. But not file.d_name
	// because file is a pointer to a dirent structure. The -> operator is used
	// to access the members of a structure through a pointer.

	/* close the directory */
	closedir(directory); // close the directory stream

	return(0);
}

