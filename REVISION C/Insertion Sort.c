#include <stdio.h>
#include <conio.h>

int isort(int a[],int size);


main()
{
	int min,i,size=7;
    srand(time(NULL));

    scanf("%d",&size);

	int a[size];

	for(i=0;i<size;i++)
	{

	a[i]=rand()%2000;

	}


	for(i=0;i<size;i++)
	{

		printf("%d-->",a[i]);
	}
	printf("\n\n\n");



//INSERTION SORT

    isort(a,size);

		for(i=0;i<size;i++)
	{

		printf("%d-->",a[i]);
	}
}

int isort(int a[],int size)
{
    int i,j,temp;

    for(i=1;i<size;i++)
    {
        temp = a[i];

        for(j=i-1;j>=0&&a[j]>temp;)
        {

        a[j+1]=a[j];
        j--;
        }

        a[j+1]=temp;

    }
}

