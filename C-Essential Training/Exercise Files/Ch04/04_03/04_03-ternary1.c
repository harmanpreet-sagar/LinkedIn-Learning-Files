#include <stdio.h>

int main()
{
	int a,b,c;

	a = 10;
	b = 14;
  // The ? acts as a ternary operator, i.e., another from of the if statement.
  // If the value is true, c is set to the value before the colon.
  // If the value is false, c is set to the value after the colon.
	c = ( a > b ) ? a : b;
	printf("%d is the greater of %d and %d\n",c,a,b);

	return(0);
}
