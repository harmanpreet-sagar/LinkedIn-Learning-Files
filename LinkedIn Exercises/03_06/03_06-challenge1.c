#include <stdio.h>

int main()
{
	int artifacts,rooms,paintings,sculptures;

	/* code your calculations here */

  // ? The museum has 12 rooms, each of which have 16 paintings and 4
  // ? sculptures. Calculate the number of artifacts.

  rooms = 12;
  paintings = 16; // Per room
  sculptures = 4; // Per room

  artifacts = rooms * (paintings + sculptures);

	printf("This museum has %d artifacts\n",artifacts);

	return(0);
}
