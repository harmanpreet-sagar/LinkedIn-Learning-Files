#include <stdio.h>
#include <stdlib.h>

// Output a newline
void newline(void)
{
  putchar('\n');
}

// Output the separator row
void separator_row(int count, char character)
{
  int x;
  for(x = 0; x < count; x++)
    putchar(character);
}

/* generate multiple lines of output */
int main()
{
	int row, c, rows;
	char column;

	/* get and verify input */
	printf("How many rows (18 max)? ");
	scanf("%d",&rows);
	/* avoid out-of-range values */
	if(rows > 18)
		rows = 18;

	/* use variable c to count the number rows */
	c = 0;
	/* process the rows */
	for(row = 0; row < rows; row++)
	{
		/* switch output every other row */
		/* separator row */
		if(row % 2)
		{
			separator_row(40, '=');
			newline();
		}
		else
		/* values row */
		{
			for(column = 'A'; column <= 'J'; column++ )
				printf(" %d%c ",c,column);
			newline();
			c++;
		}
	}

	return 0;
}
