#include <stdio.h>
#include <unistd.h>

int main()
{
	char path[512]; // buffer to hold the current
	// working directory path.

	chdir(".."); // change the current working
	// directory to the parent directory.
	getcwd(path,512); // get the current working directory path.
	
	printf("This program is running in the %s directory\n",path);

	return(0);
}
