#include <stdio.h>

int main()
{
	int a,b;

	a = 100;
	b = 7;

  // To typecast, put the new type in the brackets() before it.
  // Typecasting doesn't change the underlying data type of the variables.
	printf("%d / %d = %f\n",a,b,(float)a/b);

	return(0);
}
