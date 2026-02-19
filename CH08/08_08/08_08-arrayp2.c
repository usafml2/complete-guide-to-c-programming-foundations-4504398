#include <stdio.h>

int main()
{
	char *veeps[5] = { "Adams", "Jefferson", "Burr", "Clinton", "Gerry" };
	int x;

	for(x=0;x<5;x++)
		printf("%s\n",*(veeps+x)); // veeps is an array of pointers to char,
		// so veeps+x gives us a pointer to the x-th element of the array,
		// which is a pointer to char. Then we dereference that pointer 
		//to get the string it points to.

	return(0);
}

