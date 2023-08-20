#include <stdio.h>

int funct(void)
{
  // To retain the value of the variable a, we need to use the storage class
  // specifier static.
	static int a = 0;

	a += 16;
	printf("In funct(), A = %d\n",a);

	return(a);
}

int main()
{
	int a;

	a = funct();
	printf("In main(), A = %d\n",a);
	a = funct();
	printf("In main(), A = %d\n",a);
	a = funct();
	printf("In main(), A = %d\n",a);

	return(0);
}
