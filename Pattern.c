#include <stdio.h>

int main()
{
    int i,j,n,m,o=4,k;

    printf("\n Give The Value Of i\n");
    scanf("%d",&n);
    n = n*2-1;

    for(i=7;i>=1;i--)
    {
        for(j=1;j<=7;j++)
        {
            if(i==1||j==1||i==n||j==n)
            {
                printf("%d",o);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
