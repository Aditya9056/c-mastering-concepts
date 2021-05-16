#include<stdio.h>

void multiply(int m, int n,int a[][n], int b[][m], int c[][m]);

main()
{

    int i,j,k,m,n;
    printf("\n Give Size of the Row and Column\n");
    scanf("%d%d",&m,&n);
    int a[m][n],b[n][m],c[m][m];

    printf("\n Enter Elements\n");

    for(i=0;i<m;i<i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    for(i=0;i<m;i<i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }


    printf("\n Enter Second Array Element\n");

    for(i=0;i<m;i<i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }



    for(i=0;i<m;i<i++)
    {
        for(j=0;j<n;j++)
        {
           c[i][j]=0;
        }
    }
      for(i=0;i<m;i<i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }


multiply(a,b,c,m,n);
printf("\n\n\n");

 for(i=0;i<m;i<i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
}


void multiply(int m, int n,int a[][n], int b[][m], int c[][m])
{

    int i,j,k;
    //Matrix Multiplication

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            for(k=0;k<n;k++)
            {
                c[i][j]=a[i][k]*b[k][j]+c[i][j];
            }
        }
    }


//Multiplication Ends Here
}
