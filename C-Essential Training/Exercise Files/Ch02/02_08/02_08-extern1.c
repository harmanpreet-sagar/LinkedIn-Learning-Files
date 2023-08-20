#include <stdio.h>

int a,b;

void sum(void)
{
  // * extern: An extern variable exists outside of or external to a function as
  // * is available to all functions.

  // ! Avoid using external (global) variables unless they are absoluetly necessary.
	extern int a,b;

	a = 91; b = 7;
	printf("%d + %d = %d\n",a,b,a+b);
}

int main()
{
	extern int a,b;

	puts("Calling the sum() function:");
	sum();
	puts("And in main():");
	printf("%d + %d = %d\n",a,b,a+b);

	return(0);
}
