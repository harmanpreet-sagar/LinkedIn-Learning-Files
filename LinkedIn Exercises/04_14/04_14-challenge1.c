#include <stdio.h>
#include <stdlib.h>

/* generate multiple lines of output */
int main()
{
	int a, rows, b, rows_current;
  char columns;

	/* get and verify input */
	printf("How many rows (18 max)? ");
	scanf("%d",&rows);
	/* avoid out-of-range values */
	if( rows>18 )
		rows = 18;

	/* process the rows */

  rows_current = 0;

  for (a = 0; a < rows; a++)
  {
    if ((a % 2) == 0)
    {
      for (columns = 'A'; columns <= 'J'; columns++)
      {
        printf(" %d%c ", rows_current, columns);
      }
      rows_current += 1;
    }
    else
    {
      for (b = 0; b < 40; b++)
      {
        putchar('=');
      }
    }

    printf("\n");    
  }

	return 0;
}
