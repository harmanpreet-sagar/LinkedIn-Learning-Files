#include <stdio.h>

int main()
{
	int a;

	printf("How long is the line? ");
	scanf("%d",&a);

	/* write the loop here */

  // ? Write a loop that repeats based on user input and each time the loop
  // ? repeats, a hyphen character is displayed on the line.

  for (int b = 1 ; b <= a; b++)
  {
    putchar('-');
  }

	return(0);
}
