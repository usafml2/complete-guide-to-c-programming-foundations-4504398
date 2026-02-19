#include <stdio.h>
#include <stdlib.h>

int main()
{
	struct person {
		char name[32];
		int age;
	} *you; // you is a pointer to a structure variable of type struct person

	/* allocate storage for the structure */
	you = malloc( sizeof(struct person) );
	if( you== NULL)
	{
		puts("Unable to allocate storage");
		exit(1);
	}

	printf("Enter your name: ");
	fgets(you->name,32,stdin); // read a line of input into you->name,
	// with a maximum of 31 characters (plus null terminator)
	// Note: you->name is equivalent to (*you).name, 
	// which accesses the name member of the structure pointed to by you.
	/* get your age */
	printf("Enter your age: ");
	scanf("%d",&you->age); // read an integer from input and store it in you->age.
	// Note: &you->age is the address of you->age, which is needed
	// for scanf to store the input value.
	// you->age is equivalent to (*you).age, which accesses the age member of
	// the structure pointed to by you.

	printf("You are %s",you->name);
	printf("You are %d years old\n",you->age);

	/* clean-up */
	free(you);
	return(0);
}

