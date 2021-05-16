#include <stdio.h>

void bsort(int arr[], int size);
void isort(int arr[], int size);
void ssort(int arr[], int size);
void swap(int *,int *);


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

    //bsort(a,size);//Bubble Sort

  isort(a,size);//Insertion Sort

    //ssort(a,size); //SELECTION SORT

		for(i=0;i<size;i++)
	{

		printf("%d-->",a[i]);
	}

    /* printf("\nWHich Element YOU want to search\n");
        scanf("%d",&ele);
        bsearch(a,size,ele);
    */
}


void bsort(int arr[], int size)
{

    int i,j,temp;

    for(i=0;i<size-1;i++)
    {
        for(j=0;j<size-i-1;j++)
        {
        if(arr[j]>arr[j+1])
            {

                swap(&arr[j],&arr[i]);
            }
        }

    }

}


void ssort(int arr[], int size)
{
    int i,j,k,small;

    for(i=0;i<size;i++)
    {
        small = i;

        for(j=i+1;j<size;j++)
        {
            if(arr[small]>arr[j])
            {
                small = j;
            }
        }

        swap(&arr[i],&arr[small]);
    }
}

void isort(int arr[],int size)
{
    int i,j,temp;

    for(i=1;i<size;i++)
    {

        temp = arr[i];
        j = i-1;

        while(temp<arr[j]&&j>=0)
        {
            arr[j+1] = arr[j];
            j--;
        }


        arr[j+1] = temp;
    }


}

void swap(int *a,int *b)
{
    int temp = *b;
    *b = *a;
    *a = temp;
}

