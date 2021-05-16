#include <stdio.h>
#include <conio.h>

#define size 5


int arr[size];
int i=0,j=0,o=0;
int sum =0;

int enter(int a[]);
int show(int a[]);

int enter(int a[])
{
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	if(i==size)
	{
		return;
	}
	else
	{
		enter(arr);
		
	}
	
	
}

int show (int a[])
{
	
	for(i=0;i<size;i++)
	{
		printf("%d",a[i]);
	}
	if(i==size)
	{
		printf("\n\nThese are all array elements\n\n");
		return;
	}
	else
	{
		show(arr);
		
	}
	
}

int cmlative(int a[])
{
		sum = sum+a[o];
		a[o]=sum;
		o++;
		if(o==size)
		{
			printf("\n\nDone Cumulative Sum !!!!\n");
			return;
		}
		else
		{
		cmlative(arr);	
		}
}

main()
{
	int ab;
	while(1)
	{
	printf("\n\nEnter entry \n1.Inser \n 2. Show\n 3. Cumulative Sum\n 4. Exit\n");
	scanf("%d",&ab);
	switch (ab)
	{
	case 1:
	enter(arr);
	break;
	case 2:
	show(arr);
	break;
	case 3:
	cmlative(arr);
	break;
	case 4:
		printf("Exiting NOW!!!!!");
		exit(0);
	}
}
 }
