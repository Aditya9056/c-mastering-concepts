#include <stdio.h>

int main()

{
    int i,j,k;
   char a[10],b[10];


   gets(a);
   gets(b);

   scanf("%d",&j);

   if(j==1)
   {
    for(i=0;i<10;i++)
    {

        b[i] = a[i];
    }

    puts(b);
   }


   else if(j==2)
   {
    for(i=0;i<10;i++)
    {

        a[i] = b[i];
    }

    puts(a);
   }

    system("pause");
}
