#include <stdio.h>
#include <string.h>

int main()

{
    int count = 0,count2 = 0,i,j;
char ch[10];


    for(j=0;j<10;j++)
    {
        ch[j]  = 0;
    }

    gets(ch);

   for(j=0;j<10;j++)
   {
       if(ch[j]!=0)
       {
           count++;
       }
   }

printf("%d",count );


   system("pause");
}
