#include <stdio.h>

int main()

{
    int n,m,sum,temp,i,j;
sum =0;
    scanf("%d",&n);

    int a[n][n];

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
        scanf("%d",&a[i][j]);
        }
    }


    printf("\t\t\n");

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
        printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<n;i++)
 {
        for(j=0;j<n;j++)
    {
        if(i<j)
        {
            temp = a[i][j];

            a[i][j] = a[j][i];

        a[j][i] = temp;
        }
    }
 }


    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
        printf("%d ",a[i][j]);
        }
        printf("\n");

    }


    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {

        if(a[i]==a[j])
        {
            sum = sum + a[i][j];
        }

        }
    }

    printf("\n\n\n\n%d",sum);






    system("pause");
}
