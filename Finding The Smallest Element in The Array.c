#include <stdio.h>
#include <conio.h>

#define size 100

main()
{
	
int arr[size],i,min;
	
	srand(time(NULL));
	
	for(i=0;i<size;i++)
	{
		arr[i]= rand()%2000;
	
	}
	
	for(i=0;i<size-1;i++)
	{
		
		printf("%d-->",arr[i]);
	}
		printf("%d",arr[i]);
	
	printf("\n\n\n");
	
	min = arr[0];
	
	for(i=1;i<size;i++)
	{
		
		if(min>arr[i])
		{
			min = arr[i];
		}
		
	}
	
	printf("The Smallest Element in the Given Array is --> %d",min);
	
	
}
