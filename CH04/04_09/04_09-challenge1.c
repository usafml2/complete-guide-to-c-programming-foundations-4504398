#include <stdio.h>

int main()
{
	int a;

	printf("How long is the line? ");
	scanf("%d",&a);

	/* write the for loop here */
	// char my_char = '-';
	// char new_line = '\n';
	for (int i = 0; i < a; i++) {
		putchar('-');
	}
  putchar('\n');

	/* write the while loop here */
	int j = 0;
	while (j < a) {
		putchar('-');
		j++;
	}
	putchar('\n');

	return(0);
}
