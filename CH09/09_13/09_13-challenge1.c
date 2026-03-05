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
	puts("The file has been written");

	/* close the file */
	fclose(fp);
	puts("The file has been closed");
}

void read_file(const char *f)
{
	FILE *fh;
	int ch;

	/* open the file */
	fh = fopen(f, "r");
	if (fh == NULL)
	{
		printf("Unable to read from file %s\n", f);
	}
	puts("The file has been opened and read.");
  puts("The file output is ");

	while (1)
	{
		ch = fgetc(fh);
		if (ch == EOF)
			break;
		putchar(ch);
		
	}
  
	/* clean-up */
	fclose(fh);
	puts("Now the read file stuff.dat has been closed");
}

void delete_file(const char *f)
{
	int status;

	status = unlink(f);

	if (status == 0)
	{
		printf("File %s unlinked successfully. That is deleted.\n", f);
	}
	else
	{
		perror("Error unlinking file");
	}
}

int main()
{
	const char filename[] = "stuff.dat";

	create_file(filename);
	read_file(filename);
	delete_file(filename);

	return 0;
}
