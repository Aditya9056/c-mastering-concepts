#include <stdio.h>

int chsq(int m,int n,int a[][n])
{

    int i,j,k,l=0,s=0,sum=0,q=0,d=0;

    for(i=0;i<m;i<i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);

            if(i==0)
            {sum=a[i][j]+sum;}
        }
        printf("\n");
    }

    printf("\n The Great Sum is %d \n",sum);

    q = sum;


    printf("\n Checking Diagonals\n");

    for(i=0;i<m;i<i++)
    {
        for(j=0;j<n;j++)
        {
         if(i==j)
         {
             d = a[i][j]+d;
         }
        }
    }
if(q==d)
{
    printf("\n Hence Right Diagonal is Passed\n");
}
else{
    printf("\n Not A Magic Square \n");
    exit(0);
}

printf("\nCheck Left\n");

            for (i = 0; i < m; ++i)
            {
                sum = sum + a[i][i];
                l = l + a[i][m - i - 1];
            }



            if(l==q)
            {

                printf("Passed The Left One Also\n");

            }
            else{

                printf("Not A Magic Square\n");
                exit(0);
            }


            printf("\n Checking Rows");


    for(i=0;i<m;i<i++)
    {
        s = 0;
        for(j=0;j<n;j++)
        {

        s= s+a[i][j];

        }
        if(s!=q)
        {
            printf("\nRow Not Equal Not A Magic Square\n");
            exit(0);
        }
    }
printf("\nRows Passed Now Checking Columns\n");


       for(j=0;j<m;j++)
    {
        s=0;
        for(i=0;i<n;i++)
        {

        s= s+a[i][j];

        }
        if(s!=q)
        {
            printf("\nColumn Not Equal Not A Magic Square\n");
            exit(0);
        }
    }

    printf("\n Column Are Also Equal Its a Magic Square\n");

}



int main()
{

int i,j,m,n;

    printf("\n Give Size of the Row and Column\n");

    scanf("%d%d",&m,&n);
    int a[m][n];

    printf("\n Enter Elements\n");

    for(i=0;i<m;i<i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("\n");


    chsq(m,n,a);


}

