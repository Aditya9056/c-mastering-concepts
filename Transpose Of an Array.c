#include <stdio.h>

int main()

{
    int n,m;
    int temp,lar,b,i;

   scanf("%d %d",&n,&m);

   printf("All done");
   int a[n][m];


   for(b=0;b<n;b++)
   {
       for(i=0;i<m;i++)
       {
           scanf("%d",&a[b][i]);
       }
   }


   for(i=0;i<3;i++)
   {
       for(b=0;b<3;b++)
       {
           printf("%d ",a[i][b]);
       }
       printf("\n");
   }


   for(n=0;n<3;n++)
    {
        for(m=0;m<3;m++)
        {
            if(m<n)

        {
            temp = a[n][m];

        a[n][m] = a[m][n];

        a[m][n] = temp;

        }

        }
    }


    printf("\n\n\n\n");

   for(i=0;i<3;i++)
   {
       for(b=0;b<3;b++)
       {
           printf("%d ",a[i][b]);
       }

       printf("\n");
   }

    system("pause");
}
