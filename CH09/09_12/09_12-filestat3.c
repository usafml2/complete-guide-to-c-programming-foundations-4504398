#include <stdio.h>
#include <dirent.h> // for opendir(), readdir(), closedir().
#include <sys/stat.h> // for stat().
#include <time.h>	// for ctime().

int main()
{
	DIR *directory; // pointer to a directory stream.
	// DIR is a type defined in dirent.h. It is used
	// to represent a directory stream. A directory
	// stream is an object that represents a directory.
	// It is used to read the contents of a directory.
	// The opendir() function returns a pointer to a
	// directory stream. The readdir() function returns
	// a pointer to a dirent structure representing
	// the next file in the directory.
	// The closedir() function closes the directory stream.
	struct dirent *file; // pointer to a dirent structure.
	// The dirent structure is defined in dirent.h. It contains
	// information about a file in a directory. The d_name
	// member of the dirent structure is a string that contains
	// the name of the file.
	struct stat fstat; // structure to hold file information.
	// The dirent structure is defined in dirent.h.
	// It contains the name of the file in the d_name member.
	// The stat structure is defined in sys/stat.h.
	// It contains information about the file.

	/* open the directory */
	directory = opendir(".");
	if( directory == NULL )
	{
		puts("Unable to open current directory");
		return(1);
	}

	/* do something */
	printf("%-5s %-20s %-10s %s\n","Type","Filename","Size","Timestamp");
	while( (file=readdir(directory)) != NULL )
	{
		stat(file->d_name,&fstat);
		if( S_ISDIR(fstat.st_mode) )
			printf(" Dir ");
		else
			printf("File ");
		printf("%20s %10ld ",
				file->d_name,
				fstat.st_size
			  );
		printf("%s",ctime(&fstat.st_mtime));
	}

	/* close the directory */
	closedir(directory);

	return(0);
}

