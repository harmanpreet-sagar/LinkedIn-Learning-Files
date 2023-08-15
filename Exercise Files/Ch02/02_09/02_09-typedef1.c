#include <stdio.h>

int main()
{
  // typedef can be used to declare a new type.
  // First we insert what pre-existing type the new type would have and then
  // write the name of the new type.
  // It can also be defined outside the functions (externally).
	typedef float radius;

	radius a;

	a = 27.5;

	printf("A circle with radius %.2f has an area of  %.2f\n",
			a,
			a*a*3.1415926
		  );

	return(0);
}

