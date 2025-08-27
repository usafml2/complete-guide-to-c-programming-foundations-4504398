#include <stdio.h>

typedef float radius;

int main()
{

	radius a;

	a = 27.5;

	printf("A circle with radius %.2f has an area of  %.2f\n",
				 a,
				 a * a * 3.1415926);

	return (0);
}
