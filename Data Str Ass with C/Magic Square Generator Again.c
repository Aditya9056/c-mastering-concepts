#include <stdio.h>

int msquare(int s)
{
    int i,j,mid,m,n,count,co=0;

    int a[s][s];

    mid = s/2;
    for(i=0;i<s;i++)
    {
        for(j=0;j<s;j++)
        {

          a[i][j]=0;
        }
    }

    count = 0;
    if(s%2==0)
    {
        printf("This Will Work For Only Odd No. Square Matrix.\n");
        exit(0);
    }
    j=mid;
    i=0;
    for(co=1;co<(s*s);)
    {
        if(i!=0&&j!=0)

    {
            if(a[i][j]==0)
        {


            a[i][j]=co++;

            m=i;n=j;

            i--;
            j--;
            continue;

        }
        else if(a[i][j]==0)
        {
            i=m,j=n;
            i++;

            a[i][j]=co++;
            i--;
            j--;
            continue;

        }
    }
        if(i==0||j==0)//First Condition
        {
        if(a[i][j]==0)
            {

            if(i==0)
            a[i][j]=co++;    i=s-1;j--;
            if(j==0)
            a[i][j]=co++;    j=s-1,i--;
            if(i==0&&j==0)
            a[i][j]=co++;    i=s-1;j=s-1;

            }
        else
        {
            i=m,j=n;
            i++;

            a[i][j]=co++;

            i--;
            j--;


        }


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

    printf("\n Give the Size of Square Matrix\n");
    scanf("%d",&size);
    msquare(size);
}
