#include <stdio.h>

int n = 5,m=5;

struct val esearch(int [m][n],int );

 struct val
    {

    int i;
    int j;

    };
    struct val v,r;

main()
{



int i,j,o=0,e;
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

r =esearch(a,e);
printf("\nThe Returned is %d %d",r.i,r.j);

}


struct val esearch(int a[m][n],int e)
{



        for(v.i=0;v.i<m;v.i++)
        {
            for(v.j=0;v.j<n;v.j++)
            {

                if(e==a[v.i][v.j])

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
