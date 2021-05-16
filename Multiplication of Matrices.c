#include <stdio.h>

int main()

{
    int n,m,k;
    int temp,lar,b,i;

   scanf("%d %d",&n,&m);

   printf("All done");
   int a[n][m],o[m][n],c[n][n];

   printf("\n\n\nGive ELements");

   for(b=0;b<n;b++)
   {
       for(i=0;i<m;i++)
       {
           scanf("%d",&a[b][i]);
       }
   }

   printf("1st  \n\n");
   for(b=0;b<n;b++)
   {
       for(i=0;i<m;i++)
       {
           printf("%d ",a[b][i]);
       }
       printf("\n");
   }


   for(b=0;b<m;b++)
   {
       for(i=0;i<n;i++)
       {
           scanf("%d",&o[b][i]);
       }
   }

printf("Sencond \n\n\n");
   for(b=0;b<n;b++)
   {
       for(i=0;i<m;i++)
       {
           printf("%d ",o[b][i]);
       }
       printf("\n");
   }


   for(b=0;b<n;b++)
   {
       for(i=0;i<n;i++)
       {
           c[b][i] = 0;
       }
   }



   for(b=0;b<m;b++)
   {
       for(i=0;i<n;i++)
       {
           for(k=0;k<m;k++)
           {
               c[b][i] = c[b][i]+a[b][k]*o[k][i];
           }
       }
   }


   printf("After Multiplication \n\n\n");

   for(i=0;i<n;i++)
   {
       for(b=0;b<m;b++)
       {
           printf("%d ",c[i][b]);
       }
       printf("\n");
   }


   printf("\n\n\n\n");

    system("pause");
}
