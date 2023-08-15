#include <stdio.h>

int main()
{
	float pi = 3.14159;
  // The .2 limits the output of a floating point number to only 2 decimal
  // places.
  // So basically, the number after the decimal in the %.(num)f indicates the
  // number of decimal places allowed in output 
	printf("The value of pi: %.2f\n",pi);
	return 0;
}
