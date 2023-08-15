#include <stdio.h>

int main()
{
	int a;

	printf("How long is the line? ");
	scanf("%d",&a);

	/* write the loop here */

  // ? Write a loop that repeats based on user input and each time the loop
  // ? repeats, a hyphen character is displayed on the line.

  int b = 1;

  while (b <= a)
  {
    putchar('-');
    b++;
  }
  

	return(0);
}
