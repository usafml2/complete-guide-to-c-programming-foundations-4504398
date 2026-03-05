#include <stdio.h> // for printf().
#include <sys/stat.h> // for stat(). 
#include <time.h> // for ctime().

int main()
{
	const char filename[] = "alpha.txt"; // file to be examined.

	struct stat fstat; // structure to hold file information.
	// fstat() returns 0 on success, -1 on failure.
	// stat() is a system call that retrieves
	// information about the file specified by
	// filename and stores it in the structure 
	// pointed to by fstat.

	stat(filename,&fstat); // get file information.
	// print the file size and last modification time.
	// filename is a string, &fstat is a pointer to the
	// stat structure.

	printf("%s is %ld bytes long\n", // print the file size
			filename, // filename is a string
			fstat.st_size // fstat.st_size is the size of the file in bytes
		  );
	printf("It was modified on %s",ctime(&fstat.st_mtime)); // fstat.st_mtime is
	// the last modification time of the file. ctime is a function that converts
	// the time to a string. &fstat.st_mtime is a pointer to the time_t value
	// representing the last modification time.

	return(0);
}

