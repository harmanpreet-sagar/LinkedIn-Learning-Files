#include <stdio.h>

// ? Write the line() function which outputs a line of 40 hyphens.
// ? The line() function is void and has no arguments.

// My code
void line(void)
{
  int a;

  for (a = 0; a < 40; a++)
  {
    putchar('-');
  }
  putchar('\n');
}


int main()
{
	puts("How to Fight Off a Robot Attack");
	line();
	puts("A Survival Guide for the 21st Century");
	line();

	return(0);
}

