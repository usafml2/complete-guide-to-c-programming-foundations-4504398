#include <stdio.h>

void three(float a, float *b, float *c) // The parameters b and c are pointers to floats
{
	*b = a/3.0; // * dereferences the pointer b to access the value
	// of the variable that is passed to the function as an argument,
	// and assigns a new value to it.
	*c = a/7.0; // The function can modify the values of b and c,
	// which are passed by reference, by dereferencing the pointers
	// and assigning new values to them.
}

int main()
{
	float x,y;

	three(20.0,&x,&y);
	printf("20 / 3 = %.1f\n",x);
	printf("20 / 7 = %.1f\n",y);

	return(0);
}
