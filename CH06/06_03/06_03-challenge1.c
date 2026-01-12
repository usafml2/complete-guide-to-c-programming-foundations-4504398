#include <stdio.h>

int main()
{
	int ages[] = {23, 45, 12, 67, 34};
	int x;

  for (x = 0; x < 5; x++) 
	printf("I know someone who is %d years old.\n", ages[x]);
	return 0;
}
