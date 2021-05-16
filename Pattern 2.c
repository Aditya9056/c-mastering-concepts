#include <stdio.h>

int main()
{
    int i,j,n,m,o=4,k;

    printf("\n Give The Value Of i\n");
    scanf("%d",&n);
    o = n*2-1;

    int pat[o][o];

    for(i=0;i<=o;i++)
    {
        for(j=0;j<=o;j++)
        {
            if(i==0||j==0||i==o-1||j==o-1)
            {
                printf("%d ",n);
            }
            else if(i==1||j==1||i==o-2||j==o-2)
            {
                k = n-1;

                printf("%d ",k);
            }
            else if(i==2||j==2||i==o-3||j==o-3)
            {
                k = n-2;
                printf("%d ",k);
            }
            else if(i==3||j==3||i==o-4||j==o-4)
            {
                k = n-3;
                printf("%d ",k);
            }

        }
        printf("\n");
    }
}

