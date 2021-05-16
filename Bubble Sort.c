#include <stdio.h>
#include <conio.h>

#define size 5

main()
{
	int i,j,temp;
	
	int a[size];
	
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n\n");
	
	for(i=0;i<size;i++)
	{
		printf("%d -->",a[i]);
	}
	
	for(i=0;i<size-1;i++)
	{
		for(j=0;j<size-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]= temp;
			}
		}
	}
	
	printf("\n\n");
	for(i=0;i<size;i++)
	{
		printf("%d -->",a[i]);
	}
	
	
	
}
