#include <stdio.h>

int main()
{
	int a,b;

  // Was missing a closing apostrophe
	printf("Type a positive value: ");
	scanf("%d",&b);
  // Initial variable value, condition, increment size
	for(a=0; a<b; a++)
	{
		printf("I must do this %d times\n",b);
		if(a==9)
      // Was missing a semi-colon
			break;
	}

	return(0);
}

