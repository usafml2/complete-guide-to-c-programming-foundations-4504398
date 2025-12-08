#include <stdio.h>

int main(int argc, char *argv[]) // argc: argument count; argv: argument vector
{
	int x;

	printf("%d arguments found:\n",argc);
	for( x=0; x<argc; x++ )
		printf("\t%d: %s\n",x,argv[x]);
	return 0;
}
