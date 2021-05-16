#include <stdio.h>
#include <conio.h>

void merge2(int a[],int n1, int index1, int b[], int n2, int index2,int c[],int index)
{
    while(n1&&n2)
    {

        if(a[index1]<b[index2])
        {
            c[index]=a[index1];
            index++;
            index1++;
            n1--;
        }

        c[index]=b[index2];
        index++;
        index2++;
        n2--;
    }

    while(n1)
    {
        c[index]=a[index1];
        index++;
        index2++;
        n2++;
    }
}

void mergepass(int a[],int size,int l,int c[])
{
    int j,lb,q,s,r;


    q = (size/2*l);

    s = l*q*2;

    r = size-s;

    for(j=0;j<q;j++)
    {
        lb= (2*j)*l;
        merge2(a,l,lb,a,l,lb+l,c,lb);

    }
    if(r<=l)
    {
        for(j=0;j<r;j++)
        c[s+j] = a[s+j];
    }
    else
    {
        merge2(a,l,s,a,r-l,s+l,c,s);
    }
}





void merges(int a[],int size)
{

    int c[size];

    int l=1,r;

    while(l<size)
    {
        mergepass(a,size,l,c);
        mergepass(c,size,2*l,a);
        l=4*l;
    }

}
int main()
{
	int min,i,size,ele;
    srand(time(NULL));

    scanf("%d",&size);

	int a[size];

	for(i=0;i<size;i++)
	{

	a[i]=rand()%200;

	}

	for(i=0;i<size;i++)
	{
		printf(" %d->",a[i]);
	}

	printf("\n\n\n");


	merges(a,size);

for(i=0;i<size;i++)
	{

		printf(" %d->",a[i]);
	}


}
