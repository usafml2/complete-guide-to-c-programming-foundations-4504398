#include <stdio.h>
#include <stdlib.h>

#define SIZE 32 // define size for name array

struct person fill(void); // function prototype.
//fill is a function that returns a person structure and takes no arguments.
// person is a structure type defined below.
void output(struct person y); // function prototype.
// output is a function that takes a person structure as an argument and returns no values.

struct person { // define structure person
	char name[SIZE]; // name is an array of characters
	int id; // id is an integer
};

/* main program */
int main()
{
	struct person you; // declare a variable you of type struct person

	/* fill the structure. Code the fill function to get both members of a person structure:
	/* name and ID. No arguments.Prompt for both members to be input. Return the structure created.*/
	you = fill(); // call fill function to get structure
	 


	/* output the structure */
	/*Code the output function to display the structure members. */
	/*Argument is a person structure, referenced as a variable y.*/
	/*Output the structure's members: name and ID.*/
	/*ID nn belongs to person' name.*/
	/*The function returns no values.*/
	output(you); // call output function to display structure
  
	return 0;
}

struct person fill(void) // function definition.
// It returns a struct person and takes no arguments. fill is the function name.
{
	static struct person p; // declare variable p of type struct person. static is
	// used to keep the value of p between function calls.
	printf("Enter name: "); // prompt for name
	scanf("%s", p.name); //  read name into p.name
	printf("Enter ID: "); // prompt for ID
	scanf("%d", &p.id); // read ID into p.id. & is used to get the address of p.id
	return p; // return the structure p
}

void output(struct person y) // function definition. person is passed by value.
// output function takes a struct person as argument. y is the parameter.
{
	printf("ID %d belongs to person %s\n", y.id, y.name); // print ID and name. y.id is 
	// the ID member of the structure y, and y.name is the name member.
}
