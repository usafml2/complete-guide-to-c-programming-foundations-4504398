#include <stdio.h>
#include <unistd.h> // for unlink()

int main()
{
	int r;

	r = unlink("delete_me.txt");
	if( r == 0 )
		puts("File deleted");
	else
		puts("Something went wrong!");

	return(0);
}
