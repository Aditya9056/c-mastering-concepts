#include <stdio.h>
#include <conio.h>

int ssort(int a[],int size);
int bsearch(int a[], int size, int ele);

main()
{
	int min,i,size,ele;
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



//SELECTION SORT

    ssort(a,size);

		for(i=0;i<size;i++)
	{

		printf("%d-->",a[i]);
	}

        printf("\nWHich Element YOU want to search\n");
        scanf("%d",&ele);
        bsearch(a,size,ele);

}


int ssort(int a[], int size)
{
    int i,j,temp,min;

	for(i=0;i<size;i++)
    {
        min = i;
        for(j=i+1;j<size;j++)
        {
            if(a[j]<a[min])
            {

                min = j;
            }


        }
        temp = a[min];
        a[min]=a[i];
        a[i]=temp;
    }



}

int bsearch(int a[], int size, int ele)
{
    int start = 0,end = size-1;
    int mid;
    mid = (start+end)/2;


    while(start<=end)
    {
        mid = (start+end)/2;
        if(ele<a[mid])
        {
           end = mid-1;
        }
        else if(ele>a[mid])
        {
           start = mid+1;
        }
        else if(ele==a[mid])
        {
            printf("\n The Element is Found On %d\n",mid+1);
            break;
        }
        else
        {
            printf("\nThe Element does not belongs to the given array\n");
            break;
        }

    }

}










