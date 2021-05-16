#include <stdio.h>
#include <conio.h>

main()
{
	char c,*cc;
	int i;
	long l;
	float f;
	
	c = 'Z';
	i = 15;
	l = 77777;
	f = 3.14;
	
	cc = &c;
	printf("c = %c and cc = %u\n",*cc,cc);
	
	cc = &i;
	printf("i = %d and cc = %u\n",*cc,cc);
	
	cc = &l;
	printf("l = %ld and cc = %u\n",*cc,cc);
	
	cc = &f;
	printf("f = %f and cc = %u\n",*cc,cc);
}

