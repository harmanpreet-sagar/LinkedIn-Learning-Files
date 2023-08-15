#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// ? Examine the code to see where you can create a function and then write the
// ? function. The function returns a value. Rewrite the code using the new function.

// int main()
// {
// 	int r,dice1,dice2,dice3;

// 	/* seed the randomizer */
// 	srand( (unsigned)time(NULL) );
	
// 	puts("Roll them bones!");
// 	r = rand() % 6;
// 	r += 1;
// 	dice1 = r;
// 	r = rand() % 6;
// 	r += 1;
// 	dice2 = r;
// 	r = rand() % 6;
// 	r += 1;
// 	dice3 = r;
// 	printf("You rolled %d - %d - %d\n",dice1,dice2,dice3);

// 	return(0);
// }

int random_roll(void)
{
  int r;

  r = rand() % 6;
  r += 1;
  
  return r;
}

int main()
{
  int r,dice1,dice2,dice3;

	/* seed the randomizer */
	srand( (unsigned)time(NULL) );
	
	puts("Roll them bones!");
  dice1 = random_roll();
  dice2 = random_roll();
  dice3 = random_roll();
	printf("You rolled %d - %d - %d\n",dice1,dice2,dice3);

	return(0);
}
