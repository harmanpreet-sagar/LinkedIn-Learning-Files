#include <stdio.h>

int main()
{
	char ch = 'A';
  // unsigned means that it is an integer data type but can only hold positive
  // numbers.
	unsigned x = 100;
	float pi = 3.14159;

	printf("ch = %c, x = %d, pi = %f\n",ch,x,pi);
  // * %c -> Character
  // * %d -> Integer or decimal output.
  // * %s -> String
  // * %f -> Floating point
  // * %% -> Single percent sign

	return 0;
}
