#include <stdio.h>

struct pixel { // Define a structure to represent a pixel
	int horz;
	int vert;
	char color;
};

void show_pixel(struct pixel p) // Function to display pixel information.
// Pixel is passed by value. p is a copy of center in main function.
{
	printf("Pixel found at %d,%d, color = ",
			p.horz,
			p.vert
		  );
	switch(p.color) 
	{
		case 'r':
			puts("red");
			break;
		case 'g':
			puts("green");
			break;
		case 'b':
			puts("blue");
			break;
		default:
			puts("Invalid");
	}
}

int main()
{
	struct pixel center = { 320, 240, 'r' }; // Initialize a pixel structure. Pixel is red.
	// Pass the structure to the function. Center is passed by value.

	show_pixel(center); // Call the function to show pixel information.

	return(0);
}
