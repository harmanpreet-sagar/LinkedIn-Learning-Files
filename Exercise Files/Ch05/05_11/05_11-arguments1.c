#include <stdio.h>

// argc refers to the number of arguments
// - *argv refers to the various strings and/or arguments. It is a pointer.

int main(int argc, char *argv[])
{
	int x;

	printf("%d arguments found:\n",argc);
	for( x=0; x<argc; x++ )
		printf("\t%d: %s\n",x,argv[x]);
	return 0;
}
