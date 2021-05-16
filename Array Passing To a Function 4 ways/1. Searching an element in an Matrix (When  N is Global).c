#include <stdio.h>

int n=5;

struct val esearch(int [][n],int ,int );

 struct val
    {

    int i;
    int j;

    };
    struct val v,r;

main()
{



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

r =esearch(a,e,m);
printf("\nThe Returned is %d %d",r.i,r.j);

}


struct val esearch(int a[][n],int e,int m)
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
