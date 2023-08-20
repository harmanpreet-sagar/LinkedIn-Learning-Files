#include <stdio.h>

int main()
{
	char a;
	int b;
	float c;
	double d;

	a = 'A';
	b = 2;
	c = 0.25;
	d = 2.5e6;

  /* %<var>\n things are basically stating that u go to a new line after the
  variable of that specific type has been printed. It is essentially manner of
  declaring what type is going to be coming next as things not inside the
  quotation marks are usually not printed uneless their type is reffered to first
  within the quotation marks. */

	printf("a is %c\n",a);
	printf("b is %d\n",b);
	printf("c is %f\n",c);
	printf("d is %f\n",d);

	return(0);
}
