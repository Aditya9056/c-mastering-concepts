#include <stdio.h>

int msquare(int s)
{
    int i,j,mid,m,n,count,co=0;

    int a[s][s];

    for(i=0;i<s;i++)
    {
        for(j=0;j<s;j++)
        {
          a[i][j]=0;
        }
    }
    for(i=0;i<s;i++)
    {
        for(j=0;j<s;j++)
        {
            printf(" %d",a[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    if(s%2==0)
    {
        printf("This Will Work For Only Odd No. Square Matrix.\n");
        exit(0);
    }

    mid = s/2;

    j=mid;
    i=0;
    count = 1;

    a[i][j] = count;

    while(co!=(s*s))
    {
        co++;

        m=i,n=j;

        if(i!=0&&j!=0)
        {
            i--;j--;
        }
        else if(i!=0&&j==0)
        {
            i--;
            j = s-1;
        }
        else if(i==0&&j!=0)
        {
            i = s-1;
            j--;
        }
        else
        {
            j=s-1;
            i=s-1;
        }

        if(a[i][j]==0)
        {
            a[i][j] = ++count;
        }
        else
        {
            i = m;
            j = n;
            i++;
            a[i][j] = ++count;
        }
    }

    for(i=0;i<s;i++)
    {
        for(j=0;j<s;j++)
        {
            printf(" %d",a[i][j]);
        }
        printf("\n");
    }


}




    int main()
{
    int size;
    while(1)
    {
        printf("\n Give the Size of Square Matrix\n");
        scanf("%d",&size);
        msquare(size);

    }
}
