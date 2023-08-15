#include <stdio.h>

void sum(void)
{
  // The auto keyword is not necessary as the compiler considers all variables
  // to be auto unless declared static or external.

  // * auto: An auto variable is local or private to the function in which it is defined.
	auto int a,b;

	a = 91; b = 7;
	printf("%d + %d = %d\n",a,b,a+b);
}

int main()
{
	puts("Calling the sum() function:");
	sum();
	puts("done");

	return(0);
}
