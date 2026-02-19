#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	struct person {
		char *name; // name is a pointer to char (string)
		int age;
	} *you; // you is a pointer to a structure variable of type struct person

	/* allocate storage */
	you = malloc( sizeof(struct person) );
	if( you== NULL)
	{
		puts("Unable to allocate storage");
		exit(1);
	}
	you->name = malloc( sizeof(char) * 32 ); // allocate memory for 32 characters to hold the name
	// Note: you->name is equivalent to (*you).name,
	// which accesses the name member of the structure pointed to by you.
	if( you->name == NULL)
	{
		puts("Unable to allocate storage");
		exit(1);
	}

	/* gather input */
	printf("Enter your name: ");
	fgets(you->name,32,stdin); // read a line of input into you->name,
	// with a maximum of 31 characters (plus null terminator)
	// Note: you->name is equivalent to (*you).name, 
	// which accesses the name member of the structure pointed to by you.
	printf("Enter your age: ");
	scanf("%d",&you->age); // read an integer from input and store it in you->age.
	// Note: &you->age is the address of you->age, which is needed
	// for scanf to store the input value.
	// you->age is equivalent to (*you).age, which accesses the age member of
	// the structure pointed to by you.

	printf("You are %s",you->name);
	printf("You are %d years old\n",you->age);

	/* clean-up */
	free(you->name);
	free(you);
	return(0);
}

