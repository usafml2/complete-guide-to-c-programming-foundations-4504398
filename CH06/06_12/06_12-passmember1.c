#include <stdio.h>

char *show_color(char c) // Function to return color name based on character input. *show_color is defined before main
// to avoid implicit declaration warning. * means the function returns a pointer to a char (string).
{
	switch(c)
	{
		case 'r':
			return("red");
		case 'g':
			return("green");
		case 'b':
			return("blue");
		default:
			return("Invalid");
	}
}

int main()
{
	struct pixel { // Define a structure type named pixel
		int horz;
		int vert;
		char color;
	} center = { 320, 240, 'r' }; // Declare and initialize a variable of type pixel

	printf("The pixel at %d,%d is colored %s\n",
			center.horz,
			center.vert,
			show_color(center.color)
		  );

	return(0);
}
