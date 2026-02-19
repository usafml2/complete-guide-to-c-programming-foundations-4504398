#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	struct person { // define a structure type named person
		char *name; // name is a pointer to char (string)
		int age; 
	} you; // you is a structure variable of type struct person

	/* allocate storage */
	you.name = malloc( sizeof(char) * 32); // allocate memory for 32 characters to hold the name
	if( you.name == NULL)
	{
		puts("Unable to allocate storage");
		exit(1);
	}

	/* gather input */
	printf("Enter your name: ");
	fgets(you.name,32,stdin); // read a line of input into you.name,
	// with a maximum of 31 characters (plus null terminator)
	printf("Enter your age: ");
	scanf("%d",&you.age); // read an integer from input and store it in you.age.
	// Note: &you.age is the address of you.age, which is needed for scanf to store the input value.

	printf("You are %s",you.name);
	printf("You are %d years old\n",you.age);

	/* clean-up */
	free(you.name);
	return(0);
}

