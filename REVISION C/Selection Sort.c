#include <stdio.h>
#include <conio.h>

#define size 10

main()
{
	int arr[size],i,j,k;
	
	
	for(i=0;i<size;i++)
	{
		
	arr[i]=rand()%200;
	
	}
	
	for(i=0;i<size-1;i++)
	{
		
		printf("%d-->",arr[i]);
	}
	printf("%d",arr[i]);
	
	printf("\n\n\n");
	
	
	
	

	
	
}
