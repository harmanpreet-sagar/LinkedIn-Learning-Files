#include <stdio.h>

int main()
{
	int a,b;

	printf("Type a positive value: ");
	scanf("%d",&b);

  // You can omit putting in the curly braces {} for single lines in loops. 
	for(a=0;a<b;a++)
		printf("I must do this %d times\n",b);

	return 0;
}
