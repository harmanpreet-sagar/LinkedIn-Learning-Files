#include <stdio.h>

int main()
{
	int a = 10;

// here is a label
here:
	printf("%d\n",a);
	a--;
	if( a > 0 )
		goto here;

	return(0);
}

