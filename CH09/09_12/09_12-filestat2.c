#include <stdio.h>
#include <dirent.h> // for opendir(), readdir(), closedir().
#include <sys/stat.h> // for stat().
#include <time.h> // for ctime().

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
	// It contains information about the file,

	/* open the directory */
	directory = opendir(".");
	if( directory == NULL )
	{
		puts("Unable to open current directory");
		return(1);
	}

	/* do something */
	printf("%-25s %-10s %s\n","Filename","Size","Timestamp"); // print the header
	// for the output. %-25s is a format specifier for a string.
	// It means that the string will be left-justified and will
	// have a minimum width of 25 characters. If the string is
	// shorter than 25 characters, it will be padded with spaces
	// on the right. If the string is longer than 25 characters,
	// it will be printed as is. %-10s is a format specifier
	// for a string. It means that the string will be left-justified
	// and will have a minimum width of 10 characters. 
	//If the string is shorter than 10 characters, 
	//it will be padded with spaces on the right.
	// If the string is longer than 10 characters, it will be printed as is.
	while( (file=readdir(directory)) != NULL ) // read each file in the directory
	// readdir() returns a pointer to a dirent structure representing the next
	// file in the directory. If there are no more files, it returns NULL.
	// file is a pointer to a dirent structure representing the current file.
	// the dirent structure contains the name of the file in the d_name member.
	{
		stat(file->d_name,&fstat); // get file information. stat() is a system call
		// that retrieves information about the file specified by filename
		// and stores it in the structure. &fstat is a pointer to the stat structure.
		// file->d_name is a string. d_name is a member of the dirent structure
		// that contains the name of the file.
		printf("%25s %10lld ", // print the file size and last modification time.
			// %110lld is a format specifier for a long long int. fstat.st_size is
			// a long long int. %25s is a format specifier for a string.
			// file->d_name is a string. 25 is the minimum width of the string.
			// If the string is shorter than 25 characters, it will be padded
			// with spaces on the left. If the string is longer than 25
			// characters, it will be printed as is.
				file->d_name, // file->d_name is a string representing the name of the file.
				
				fstat.st_size // fstat.st_size is the size of the file in bytes.
				// It is a long long int.
			  );
		printf("%s",ctime(&fstat.st_mtime)); // fstat.st_mtime is the last
		// modification time of the file. It is a time_t type.
		// ctime() is a function that converts a time_t value
		// to a string
	}

	/* close the directory */
	closedir(directory);

	return(0);
}

