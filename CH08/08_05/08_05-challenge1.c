#include <stdio.h>
#include <string.h>

int main()
{
	char title[] = "Pointers don't intimidate me!\n";
	char *pt;
	int x;

	pt = title;
	for (x = 0; x < (int)strlen(title); x++)
	{
		printf("%c", *(pt + x));
	}

	return 0;
}
