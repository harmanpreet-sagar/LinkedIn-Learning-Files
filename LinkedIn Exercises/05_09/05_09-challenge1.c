#include <stdio.h>

// ? Write the line() function that accepts two arguments, an integer and a
// ? character. Use the argumenst to generate a line of characters. The integer
// ? specifies the number of characters and the character specifies the type of
// ? character.

void line(int num, char character)
{
  int a;

  for (a = 0; a < num; a++)
    putchar(character);
  putchar('\n');

}


int main()
{
	puts("Report on Extraterrestrial Activity");
	line(35,'-');

	return(0);
}
