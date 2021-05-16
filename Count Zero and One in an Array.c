#include <stdio.h>
int main()

{
   int countzero = 0,countone = 0,i,j;
   int a[7]= {1,1,1,0,0,1,0};

   for(i=0;i<7;i++)
   {
       if(a[i]==0)
       {
           countzero++;
       }
       else if(a[i]==1)
       {
           countone++;
       }

   }
printf("%d \n %d",countone, countzero);


 system("pause");
}

