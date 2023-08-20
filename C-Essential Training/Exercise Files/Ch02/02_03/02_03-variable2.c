#include <stdio.h>

int main()
{
	char a = 'A';
	int b = 2;
  // Whenever declaring a float or a double, ensure there is atleast .0
  // mentioned after a whole number to indicate that we are using a real number
  // and not an integer.
	float c = 0.25;
	double d = 2500000.0;

	printf("a is %c\n",a);
	printf("b is %d\n",b);
	printf("c is %f\n",c);
	printf("d is %f\n",d);

	return(0);
}
