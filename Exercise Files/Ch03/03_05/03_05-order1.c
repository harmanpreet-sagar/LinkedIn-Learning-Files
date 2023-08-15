#include <stdio.h>

int main()
{
	int a;

	a = 6 / 2 * (1 + 2);
  // ! Order of Precedence in the C - Language
  // * Left to Right
  // * Parentheses first
  // * Multiplication, division
  // * Addition, Subtraction
  
  // ! | () * / % + -

	printf("The people who said %d are correct.\n",a);

	return(0);
}
