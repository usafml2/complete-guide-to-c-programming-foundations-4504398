#include <stdio.h>
#include <stdlib.h>


#define FALSE 0
#define TRUE 1

int main()
{
	// variable declarations
	char command[10];
	int done = FALSE;

	/* main program loop */
	
	while(!done)
	{
		// prompt for input
		printf("Enter command (R, L, B, Q, H, or ?): ");
		//read input
		scanf("%s", command);
		// process input
		// if R is input, output "move right"
		if(command[0] == 'R' ) {
			printf("move right\n");
		}
		// if L is input, output "move left"
		else if(command[0] == 'L' ) {
			printf("move left\n");
		}
		// if B is input, output "move back"
		else if(command[0] == 'B' ) {
			printf("move back\n");
		}
		// if Q is input, break the loop
		else if(command[0] == 'Q' ) {
			done = TRUE;
			break;
		}
		// if H or ? is input, output valid commands
		else if(command[0] == 'H' || command[0] == '?' ) {
			printf("Valid commands are:\n");
			printf("R - move right\n");
			printf("L - move left\n");
			printf("B - move back\n");
			printf("Q - quit\n");
			printf("H or ? - For help\n");
		}
		// identify invalid input
		else {
			printf("Invalid command. Type H or ? for help.\n");
		}

		return (0);	
	}
}

	

		