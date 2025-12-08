#include <stdio.h>

void line(int n, char ch)
{
	for (int i = 0 ; i < n; i++)
	   putchar(ch);

putchar('\n');
}

int main()
{
	puts("Report on Extraterrestrial Activity");
	line(35,'-');
	line(20,'$');

	return(0);
}
