#include <stdio.h>
/* The math header file contains definitions for M_PI
	 and the sin() function. It does not contain the
	 code for the sin() function. The code lies in the
	 math library file */
#include <math.h>


#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

		int
		main()
{
	int w;
	for (w = 0; w < 10; w++)
	{
		printf("%.2f\n", sin(M_PI / (w + 1)));
	}
	return 0;
}
