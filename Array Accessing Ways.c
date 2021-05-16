#include <stdio.h>

main()
{
	int a[2],i=0;
	
	while(i!=2)
	scanf("%d",&a[i++]);
	
	i =0;
	a[1]=&a[2];
	printf("\n\n%d\n",*(a+1));
	
	/*here 1 is considered as offset*/ 
	
}
