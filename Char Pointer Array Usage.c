#include <stdio.h>


char x[] = "Hello I am Your Dad";

char *xy = "Hello I am Your BigDad";
main()
{
	
	static char y[] = "Hello I am Your Dad";
	
	char *yz = "Hello I am Your 2ndDad";

	printf("\n\n%s\n %s\n",x,y);
		printf("\n\n%s\n %s\n",xy,yz);
	/*here 1 is considered as offset*/ 
	
}
