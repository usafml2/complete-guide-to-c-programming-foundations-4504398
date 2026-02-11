#include <stdio.h>

int main()
{
	printf("Size of variable storage in bytes:\n");
	printf("char\t%lu\n",sizeof(char));
	printf("int\t%lu\n",sizeof(int));
	printf("float\t%lu\n",sizeof(float));
	printf("double\t%lu\n",sizeof(double));

	return(0);
}
