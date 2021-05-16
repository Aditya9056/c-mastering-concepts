#include <stdio.h>
#include <conio.h>

main()
{
	int a,*b,**c,***d,****e;
	
	a=10;
	b=&a;
	c=&b;
	d=&c;
	e=&d;
	
	printf("a=%d-->b=%u-->c=%u-->d=%u-->e=%u\n",a,b,c,d,e);
	printf("add of d = %u\n",&d);
	printf("%d-->%d-->%d-->%d-\n",a,a+*b,**c+***d,****e);
	return 0;
}

