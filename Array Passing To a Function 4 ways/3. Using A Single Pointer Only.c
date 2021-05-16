#include <stdio.h>


struct val
    {

    int i;
    int j;

    };
    struct val v,r;

struct val esearch(int *a,int e,int m,int n)
{



        for(v.i=0;v.i<m;v.i++)
        {
            for(v.j=0;v.j<n;v.j++)
            {

                if(e==*(a+v.i*n+v.j))

                {
                    printf("Found At %d %d\n",v.i,v.j);
                    return v;
                }
            }

        }

    printf("Not Found \n");
    v.i=-1,v.j=-1;
    return v;

}



main()
{


int n=5;
int i,j,o=0,e;
int m=3;
int a[m][n];

for(v.i=0;v.i<m;v.i++)
{
    for(v.j=0;v.j<n;v.j++)
    {
        a[v.i][v.j]=o++;
    }
}


for(v.i=0;v.i<m;v.i++)
{
    for(v.j=0;v.j<n;v.j++)
    {
       printf(" %d",a[v.i][v.j]);
    }
    printf("\n");
}

printf("\n");
puts("Give Element to be Search");
printf("\n");
scanf("%d",&e);

r = esearch((int *)a,e,m,n);

printf("\nThe Returned is %d %d",r.i,r.j);

}




