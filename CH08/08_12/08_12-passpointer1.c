#include <stdio.h>

void doubler(int *alpha) // The parameter alpha is a pointer to an integer
// 
{
	*alpha += *alpha; // *alpha = *alpha + *alpha
}

int main()
{
	int a = 25;

	printf("Value before: %d\n",a);
	doubler(&a); // Pass the address of a to the function,
	// so that it can modify the value of a
	printf("Value after: %d\n",a);

	return(0);
}
