#include <stdio.h>

int main()
{
  int a = 5;
  // Use single quotes when assigning a char value as double quotes indicate a
  // String.

  // Since this is a constant and we should not be able to modify it later, we
  // need to use the const keyword to indicate that it is a constant. Using that
  // keyword will prevent us from modifying it later.

  // We need to immediately assign a value to a variable that has the const type.
  const char b = 'B';

	printf("Here is the value of A: %d\n",a);
	printf("Here is the value of B: %c\n",b);

	return(0);
}

