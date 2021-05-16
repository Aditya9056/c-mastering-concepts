#include <stdio.h>
#include <conio.h>

#define size 10

main()
{
	int a[size],ele;
	int temp,i,j,pos;

		srand(time(NULL));

	for(i=0;i<size;i++)
	{

	a[i]=rand()%20000;

	}

	for(i=0;i<size;i++)
	{

		printf("%d-->",a[i]);
	}
	
	printf("\n\n\n");

	/* Insertion Sort*/
	
    for(i=1;i<size;i++)
    {
    	temp = a[i];
      	
		j=i-1;
	  
      	while(j>=0&&a[j]>temp)
      	{
      		a[j+1]=a[j];
      		j--;
		}
	a[j+1]=temp;

    }




		for(i=0;i<size;i++)
	{

		printf("%d-->",a[i]);
	}
}
