#include <stdio.h>
#include <stdlib.h>

#define FALSE 0
#define TRUE 1

int main()
{
  // variable declarations
  int ch, done;

  /* main program loop */
  done = FALSE;
  while (!done)
  {
    // prompt for input
    printf("Enter command (R, L, B, Q, H, or ?): ");
    // read input
    ch = getchar();

    // process input

    switch (ch)
    {
    case 'R':
    case 'r':
      puts("move right");
      break;
    case 'L':
    case 'l':
      puts("move left");
      break;
    case 'B':
    case 'b':
      puts("move back");
      break;
    case 'H':
    case 'h':
    case '?':
      puts("Valid commands are: ");
      puts("R - move right");
      puts("L - move left");
      puts("B - move back");
      puts("Q - quit");
      puts("H or ? - For help");
      break;
    case 'Q':
    case 'q':
      done = TRUE;
      puts("Goodbye!");
      break;
    default:
      puts("Unknown command");
      break;
    }
    while ((ch = getchar()) != '\n' && ch != EOF)
      ; // clear input buffer
  }
  return (0);
}
