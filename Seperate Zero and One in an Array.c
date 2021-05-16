#include <stdio.h>
int main()

{
   int i,j,n,zo[7];
   int a[7]= {1,1,1,0,0,1,0};
    j = 0;
   for(i=0;i<7;i++)
   {
       if(a[i]==0)
       {
           zo[j] = a[i];
           j++;
       }
   }

   for(i =0;i<7;i++)
   {
       if(a[i]== 1)
       {
           zo[j] = a[i];
           j++;
       }

   for (i=0;i<7;i++)
   {
    printf("%d \n",zo[i]);
   }
   }
 system("pause");

}

