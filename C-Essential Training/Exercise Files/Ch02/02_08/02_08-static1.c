#include <stdio.h>

char *myname(void)
{
  // * static: A static variable retains the value even after the function quits.
	static char me[] = "Dan Gookin";

	return(me);
}

int main()
{
	printf("This course's author is %s\n", myname() );

	return(0);
}

