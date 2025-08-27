#include <stdio.h>
#include <stdlib.h>

int main()
{
	// declare constant ratio equal to 3/4
	const float ratio = 3.0f / 4.0f;

	// declare char a
	char a;
	// declare integer b
	int b;
	// declare float c
	float c;

	// assign char
	a = 'A';
	// assign integer
	b = 123;
	// assign float
	c = 123.456;

	// output char value, e.g., "the value of variable a is '?'"
	printf("The value of the variable a is '%c'\n", a);
	// output integer value, e.g., "the value of variable b is ??"
	printf("The value of the variable b is %d\n", b);

	// output float value, e.g., "the value of variable c is ???.??"
	printf("The value of the variable c is %.3f\n", c);
	// output value of ratio, e.g., "the value of constant ratio is ???.??"
	printf("The value of the constant ratio is %.2f\n", ratio);

	return 0;
}
