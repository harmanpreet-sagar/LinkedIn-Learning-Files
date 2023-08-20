#include <stdio.h>
#include <stdlib.h>

/* generate multiple lines of output */
int main()
{
	int rows, a;

	/* get and verify input */
	printf("How many rows (18 max)? ");
	scanf("%d",&rows);

	/* avoid out-of-range values */
  if (rows > 18)
  {
    puts("18 is the maximum number of rows allowed");
    rows = 18;
  }

	/* process the rows */
	printf("I will process %d rows\n",rows);
  
  // * >> Shifts bits right (aka halves)
  a = rows >> 1;
  printf("%d is half of %d.\n", a, rows);

  // * << Shifts bits left (aka doubles)
  a = rows << 1;
  printf("%d is double of %d.\n", a, rows);

	return 0;
}
