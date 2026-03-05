#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void create_file(const char *f)
{
	FILE *fp;

	/* open/create the file */
	fp = fopen(f, "w");
	if (fp == NULL)
	{
		puts("Failed to create file");
	}

	/* output */
	fprintf(fp, "Chuck Watkins\n");

	/* close the file */
	fclose(fp);
}

//void read_file(const char *f)
//{
//}

//void delete_file(const char *f)
//{
//}

int main()
{
	const char filename[] = "stuff.dat";

	create_file(filename);
	//read_file(filename);
	//delete_file(filename);

	return 0;
}
