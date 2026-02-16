#include <stdio.h>
#include <string.h>

int main()
{
	char title[] = "Pointers don't intimidate me!\n";
	char *pt;
	int x;

	pt = title;
	//printf("The address of pt is %p\n", pt);
	for (x = 0; x < (int)strlen(title); x++)
	{
		printf("%c", *(pt + x));
	}
  //printf("The address of pt is %p\n", pt);
	//The address of pt has not changed.
	return 0;
}
