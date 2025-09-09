#include <stdio.h>

int main()
{
	/* variable declarations */
	int a, c;
	float b;
	/* variable assignments */
	a = 15;
	b = a / 2.0; // You have to divide by 2.0 to get
	// a floating point result
	c = b * 4;

	/* output */
	printf("Value of variable A = %d\n", a);
	printf("Value of variable B = %f\n", b);
	printf("value of vairable C = %d\n", c);

	return (0);
}
