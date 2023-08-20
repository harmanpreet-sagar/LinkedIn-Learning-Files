#include <stdio.h>

int main()
{
	int x;

	for(x=1;x<=10;x++)
	{
    // We can add ternary operators in between the print statements as well.
		printf("%d - %s\n",x,x % 2 ? "odd" : "even");
	}

	return(0);
}
