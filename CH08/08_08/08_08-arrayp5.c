#include <stdio.h>

int main()
{
	char *veeps[5] = { "Adams", "Jefferson", "Burr", "Clinton", "Gerry" };
	int x;

	for(x=0;x<5;x++)
		printf("%c\n",*(*(veeps+x)+1)); // prints the second letter of each name
		// the above statement is equivalent to:
		// printf("%c\n",veeps[x][1]);
		// *(veeps+x) gives us a pointer to the x-th element of the array,
		// which is a pointer to char (a string). Then we add 1 to that pointer
		// to get a pointer to the second character of the string,
		// and then we dereference that pointer to get the character itself. 
		
	return(0);
}

