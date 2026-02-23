#include <stdio.h>
#include <stdlib.h>

char *get_input(int size)
{
	char *a; // pointer to store the input string
	int x = 0;

	/* allocate storage */
	a = malloc( sizeof(char) * size ); // allocate memory for the input string
	// a instead of *a because we want to store the pointer to the input string,
	// not the value of the input string
	if( a==NULL )
	{
		puts("Unable to allocate memory");
		exit(1);
	}

	/* read input */
	fgets(a,size,stdin);
	/* remove newline */
	while( *(a+x) != '\0' ) // loop through the input string until we reach the null terminator
	// *(a+x) instead of (a+x) because we want to access the value of the input string,
	// not the pointer to the input string. Is it dereferncing the pointer? 
	// Yes, it is dereferencing the pointer to access the value of the input
	// string at the current index x.
	{
		if( *(a+x)=='\n' )
		{
			*(a+x) = '\0';
			break;
		}
		x++;
	}

	return(a);
}

int main()
{
	char *your_name,*your_city;

	printf("Your name: ");
	your_name = get_input(32);
	printf("Your city: ");
	your_city = get_input(32);

	printf("%s lives in %s.\n",your_name,your_city);

	free(your_name);
	free(your_city);
	return 0;
}
