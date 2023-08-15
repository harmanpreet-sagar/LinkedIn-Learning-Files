#include <stdio.h>

int main()
{
	/* variable declarations */
  int a;
  float b;
  int c;
	/* variable assignments */
  a = 15;
  // Need to write 2.0 as if you write just 2, then the compiler would interpret
  // that as an integer.
  b = a / 2.0; 
  c = b * 4;
	/* output */
	printf("Value of variable A = %d\n",a);
	printf("Value of variable B = %f\n",b);
	printf("value of variable C = %d\n",c);

	return(0);
}
